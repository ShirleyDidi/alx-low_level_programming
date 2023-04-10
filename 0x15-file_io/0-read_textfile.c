#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @letters: number of letters to read and and print
* @filename: file being read
* Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fh;
ssize_t g;
ssize_t m;
char *buffer;
fh = open(filename, O_RDONLY);
if (fh == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
g = read(fh, buffer, letters);
m = write(STDOUT_FILENO, buffer, g);
close(fh);
free(buffer);
return (m);
}
