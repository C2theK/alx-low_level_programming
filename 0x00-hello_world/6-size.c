#include<stdio.h>
/**
* main - A program that prints the size of various computer types
* Return: 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

print f("size of char: %1u byte(s)\n", (unsigned long)sizeof(a));
print f("size of an int: %1u byte(s)\n", (unsigned long)sizeof(b));
print f("size of long int: %1u byte(s)\n", (unsigned long)sizeof(c));
print f("size of long long int: %1u byte(s)\n", (unsigned long)sizeof(d));
print f("size of float: %1u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
