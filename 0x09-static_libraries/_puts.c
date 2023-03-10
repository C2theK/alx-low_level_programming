#include "main.h"
#include<stdio.h>

/**
* main - puts a string followed by new line
*
* Return: Always 0 (Success)
*/

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

