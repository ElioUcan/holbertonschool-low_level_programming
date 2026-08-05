#include "main.h"

/**
 * create_file - creates a file
 * @filename: const char
 * @text_content: char
 * Return: 1 on success otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
int fd;
char *buffer;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT);

if (fd == -1)
return (-1);

buffer = malloc(sizeof(char) * (text_content + 1));

write(fd, text_content, buffer);

free(buffer);
close(fd);

return (1);
}
