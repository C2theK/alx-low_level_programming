#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: pointer to concatenated string
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
int len1 = 0, len2 = 0, c = 0, d = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*(s1 + c))
len1++, c++;
while (*(s2 + d))
len2++, d++;
len2++; /* adds null terminator to length-depending on parameters */
concat = malloc(sizeof(char) * (len1 + len2)); /*allocates memory*/
if (concat == NULL) /* validates memory */
return (NULL);
c = 0, d = 0;
while (c < len1) /* concatenate */
{
*(concat + c) = *(s1 + c);
c++;
}
while (d < len2)
{
*(concat + d) = *(s2 + d);
c++, d++;
}
return (concat);
}
