#include "main.h"

/**
 * closeFile - checks for errors when closing a file
 * @fd: int
 * Return: void
 */
void closeFile(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - copies the content of a file to another file.
 * @argc: int
 * @argv: char
 * Return: int
 */
int main(int argc, char *argv[])
{
int fd1, fd2;
char buffer[1024];
ssize_t readFile, writeFile;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd1 = open(argv[1], O_RDONLY);
if (fd1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((readFile = read(fd1, buffer, 1024)) > 0)
{
writeFile = write(fd2, buffer, readFile);
if (writeFile == -1 || writeFile != readFile)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (readFile == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
closeFile(fd1);
closeFile(fd2);
return (0);
}
