#include "main.h"

/**
* strcat - Concatenates the string
* @dest: first string
* @src: second string
* Return: char*
*/

char *strncat(char *dest, const char *src, size_t n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}

