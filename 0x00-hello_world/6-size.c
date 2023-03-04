#include<stdio.h>

/**
* main - A program that prints the size of various computer types
*
* Return: 0 (Success)
*/

int main(void)
{
printf("size of char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d byte(s)\n", sizeof(int));
printf("size of long int: %d byte(s)\n", sizeof(long int));
printf("size of long long int: %d byte(s)\n", sizeof(long long int));
printf("size of float: %d byte(s)\n", sizeof(float));

return (0);
}
