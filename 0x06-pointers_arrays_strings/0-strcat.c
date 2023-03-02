#include "main.h"

/**
* _strcat - concatenates two strings pointed by @src to the @ dest
* @ dest: input value pointer to the string to be concat.
* @ src: input value to the source string to be appended to @dest
* Return: a pointer to the destination string @dest.
*/

char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
}

