#include "main.h"

/**
* _strcat - Concatenates the string
* @dest: first string
* @src: second string
* Return: char*
*/

char *_strcat(char *dest, const char *src)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}

