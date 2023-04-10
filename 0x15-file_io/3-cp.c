#include <stdio.h>
#define BUF_SIZE 1024
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
/**
* cp - copies the content of a file to another file.
* @file_from: does not exist, or if you can not read it, exit with code 98
* @file_to: already exists, truncate it 
*/
int main(int argc, char *argv[])
{
int mod, mon;
ssize_t numb_read;
ssize_t numb_written;
char *buf;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
mod = open(argv[1], O_RDONLY);
if (mod == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
} 
mon = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (mon == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(mod);
exit(99);
}
buf = calloc(1024, sizeof(char));
while ((numb_read = read(mod, buf, BUF_SIZE)) > 0)
{
numb_written = write(mod, buf, numb_read);
if (numb_written != numb_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(mod);
close(mon);
exit(99);
}
}
if (numb_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(mod);
close(mon);
exit(98);
}
if (close(mod) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close mod %d\n", mod);
exit(100);
}    
if (close(mon) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close mon %d\n", mon);
exit(100);
}
return (0);
}
