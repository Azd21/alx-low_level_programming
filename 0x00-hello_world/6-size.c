#include <stdio.h>


/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

pirntf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
pirntf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
pirntf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
pirntf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(long (c));
pirntf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
