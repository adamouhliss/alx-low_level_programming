#include<stdio.h>
/**
* main - Entry point
*
* Description: This is a C script that uses prints function
* to print the size of various types on the computer is compiled and run on to the standard output.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("size of a char: %d bytes\n", sizeof(char));
	printf("size of a double: %d bytes\n", sizeof(double));
	printf("size of int: %d bytes\n", sizeof(int));
	printf("size of float: %d bytes\n", sizeof(float));
	printf("size of long: %d bytes\n", sizeof(long int));
	printf("size of long long: %d bytes\n", sizeof(long long int));
	return (0);
}
