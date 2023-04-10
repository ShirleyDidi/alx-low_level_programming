#include "main.h"
#include <string.h>
/**
* create_file - creates a file
* @filename: file name
* @text_content: is NULL create an empty file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int dg;
size_t len;
ssize_t bytes_written;
if (filename == NULL)
return (-1);
dg = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (dg == -1)
return (-1);
if (text_content != NULL)
{
len = strlen(text_content);
bytes_written = write(dg, text_content, len);
if (bytes_written == -1 || (size_t)bytes_written != len)
close(dg);
return (-1);
}
close(dg);
return (1);
}
