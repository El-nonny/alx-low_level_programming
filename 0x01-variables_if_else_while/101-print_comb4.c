#include <stdio.h>

/**
* main - Print numbers from 00 to 99
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int tens;
	int ones;
	int hundreds

	  for (tens = 0; tens <= 9; tens++)
	  {
	  for (ones = 0; ones <= 9; ones++)
	  {
	  for (hundreds = 0; hundreds <=9; hundreds++)
	  putchar(tens + '0');
	  putchar(ones + '0');
	  putchar(hundreds + '0');

	  if (tens < 8)
	  {
	  putchar(',');
	  putchar(' ');
	  }
	  }
	  }
	  putchar('\n');
	  return (0);
}
