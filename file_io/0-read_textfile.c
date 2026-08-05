#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: size_t
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytesRead;
ssize_t bytesWrite;



if (filename == NULL)
return (0);


fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

buffer = malloc(sizeof(letters));
if (buffer == NULL)
{
close(fd);
return (0);
}

bytesRead = read(fd, buffer, letters);

if (bytesRead == -1)
{
free(buffer);
close(fd);
return (0);
}

bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);
if (bytesWrite == -1 || bytesWrite != bytesRead)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (bytesRead);
}
