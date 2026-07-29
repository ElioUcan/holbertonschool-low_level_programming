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
char buffer[1024];
ssize_t bytesRead;
ssize_t bytesWritten;

if (filename == NULL)
{
return (0);
}

fd = open(filename, O_RDONLY);

if (fd == -1)
{
return (0);
}

bytesRead = read(fd, buffer, sizeof(buffer));

if (bytesRead == -1)
{
return (0);
}
bytesWritten = write(fd, letters, strlen(letters));
if (bytesWritten == -1)
{
return (0);
}

close(fd);
return (bytesWritten);
}
