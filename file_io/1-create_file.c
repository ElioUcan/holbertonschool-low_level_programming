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
int len = 0;
ssize_t bytes_written;

if (filename == NULL)
return (-1);


if (text_content != NULL)
{
while (text_content[len] != '\0')
len++;
}

fd = open(filename, O_WRONLY | O_CREAT, 0600);

if (fd == -1)
return (-1);


if (text_content != NULL)
{
bytes_written = write(fd, text_content, length);

if (bytes_written == -1 || bytes_written != length)
{
close(fd);
return (-1);
}
}


close(fd);
return (1);
}
