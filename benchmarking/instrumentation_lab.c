#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;
    clock_t c1;
    clock_t c2;
    clock_t c3;
    clock_t c4;

    double elapsed;
    double build;
    double process;
    double reduce;

    /* Students must add clock-based timing and print required lines. */
    c1 = clock();
    build_dataset();
    c2 = clock();
    process_dataset();
    c3 = clock();
    checksum = reduce_checksum();

    if (checksum == 0ul)
        printf("impossible\n");
    
    c4 = clock();
    elapsed = (double)(c4 - c1) / (double)CLOCKS_PER_SEC;
    /* Required output (exact format, no extra lines):
     * TOTAL seconds: <float>
     * BUILD_DATA seconds: <float>
     * PROCESS seconds: <float>
     * REDUCE seconds: <float>
     */
    printf("TOTAL seconds: %.6f\n", (double)(c4 - c1) / (double)CLOCKS_PER_SEC);
    printf("BUILD_DATA seconds: %.6f\n", (double)(c2 - c1) / (double)CLOCKS_PER_SEC);
    printf("PROCESS seconds: %.6f\n", (double)(c3 - c2) / (double)CLOCKS_PER_SEC);
    printf("REDUCE seconds: %.6f\n", (double)(c4 - c3) / (double)CLOCKS_PER_SEC);


    return 0;
}