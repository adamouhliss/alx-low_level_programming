#include <stdio.h>

/**
 * main - assigns alphabet from a to z
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for(ch = 'a';ch <= 'z';ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
