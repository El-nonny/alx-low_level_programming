#include <stdio.h>

/**
* main - Entry point
*
* Description: Print all single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	printf("%i", num);
	putchar('\n');

	return (0);
}
