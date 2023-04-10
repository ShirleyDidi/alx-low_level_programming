#include <stdio.h>
/**
* cp - copies the content of a file to another file.
* 
*/
#define BUF_SIZE 1024

int main(int argc, char *argv[])
{
int mod, mon;
ssize_t numb_read;
ssize_t numb_written;
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
char buf[BUF_SIZE];
numb_read;
while ((numb_read = read(mod, buf, BUF_SIZE)) > 0)
{
numb_written = write(fd_to, buf, numb_read);
if (numb_written != numb_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(mod);
close(mon);
exit(99);
}
}
if (num_read == -1)
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
