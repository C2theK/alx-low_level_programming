#include "main.h"
#include <stdlib.h>

/**
* create array of chars - initializes with a special char
* @size: size of array
*
* @c: char to assign
* Description: create array of size and assign char c
* Return: pointer to array, NULL if fail
*/
char *create_array(unsigned int size, char c)
{
char *arr;
int i = 0;
if (size <= 0) /*validates size input */
return (NULL);
arr = malloc(sizeof(char) * size); /* allocates memory */
if (arr == NULL) /* validates memory */
return (NULL);
while (i < (int)size) /* set array values to char c */
{
*(arr + i) = c;
i++;
}
*(arr + i) = '\0';
return (arr);
}

