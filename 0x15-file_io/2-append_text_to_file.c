#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* append_text_to_file - appends text at the end of a file.
* @filename: name of a file
* @text_content: content of text
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
size_t text_len;
ssize_t bytes_written;
int ab;
if (filename == NULL)
return (-1);
{
ab = open(filename, O_WRONLY | O_APPEND);
if (ab == -1)
{
return (-1);
}
if (text_content != NULL)
{
text_len = strlen(text_content);
bytes_written = write(ab, text_content, text_len);
if (bytes_written == -1 || (size_t)bytes_written != text_len)
{
close(ab);
return (-1);
}
}
close(ab);
return (1);
}
}
