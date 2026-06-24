#include <stdio.h>

int menu(void){
    printf("\nSimple Calculator\n1)Add\n2)Substract\n3)Multiply\n4)Divide\n0)Quit\nChoice: ");
    return (0);
}
int add(int x, int y){
    return (x + y);
}
int substract(int x, int y){
    return (x - y);
}

int multiply(int x, int y){
    return (x * y);
}

int divide(int x, int y){
    return (x / y);
}


int main(void){
    int option;
    int value1;
    int value2;

    puts("Welcome!!");
    while (1){
        menu();
        scanf("%i", &option);
        if (option >= 0 && option <= 4){
            switch (option)
            {
            case 1:
                printf("A: ");
                scanf("%i", &value1);
                printf("B: ");
                scanf("%i", &value2);
                printf("Result: %i", add(value1, value2));
                break;
            case 2:
                printf("A: ");
                scanf("%i", &value1);
                printf("B: ");
                scanf("%i", &value2);
                printf("Result: %i", substract(value1, value2));
                break;
            case 3:
                printf("A: ");
                scanf("%i", &value1);
                printf("B: ");
                scanf("%i", &value2);
                printf("Result: %i", multiply(value1, value2));
                break;
            case 4:
                printf("A: ");
                scanf("%i", &value1);
                printf("B: ");
                scanf("%i", &value2);
                printf("Result: %i", divide(value1, value2));
                break;
            case 0:
                puts("Bye!");
                return (0);
            default:
                break;
            }
        }
        else{
            puts("Invalid choice");
            return (0);
        }    
    }
}
