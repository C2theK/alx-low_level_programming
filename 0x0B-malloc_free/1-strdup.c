#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: string to duplicate
* Return: pointer to duplicated string in allocated memory
*/
char *_strdup(char *str)
{
char *duplicate_str;
int c = 0, len = 0;
if (str == NULL) /* validates str input */
return (NULL);
while (*(str + c))
len++, c++;
len++; /* adds null terminator to length- increaeament */
duplicate_str = malloc(sizeof(char) * len); /* allocates memory */
if (duplicate_str == NULL) /* validate the memory */
return (NULL);
c = 0;
while (c < len)
{
*(duplicate_str + c) = *(str + c);
c++;
}
return (duplicate_str);
}
