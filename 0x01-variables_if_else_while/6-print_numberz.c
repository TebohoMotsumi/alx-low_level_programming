#include <stdio.h>

/**
 * main - A program that prints 0-9 without printf
 * Return: returns 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
