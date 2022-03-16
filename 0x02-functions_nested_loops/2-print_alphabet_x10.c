#include "main.h"

/**
 * print_alphabet_x10 - prints an alphabet 10 times in lower case
 *
 * Return void
 */

void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	for (i++ <= 9;)
	{
	  for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
		_putchar('\n');	
	}
}
