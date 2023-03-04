#include<stdio.h>

/**
* main - A program that prints the size of various computer types
* Return: 0 (Success)
*/

int main(void)
{
	printf("size of char: 1 byte(s)\n", sizeof(char));
	printf("size of an int: 4 byte(s)\n", sizeof(int));
	printf("size of long int: 4 byte(s)\n", sizeof(long int));
	printf("size of long long int: 8 byte(s)\n", sizeof(long long int));
	printf("size of float: 4 byte(s)\n", sizeof(float));
	return (0);
}
