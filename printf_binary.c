#include "main.h"

/**
  * printf_bin - function prints integers to binary
  * @list_args: arguments
  * Return: number of characters
  */
int printf_bin(va_list list_args)
{
	unsigned int n = va_arg(list_args, unsigned int);
	unsigned int j;
	int charCount = 0, b = 1, z, i, num;

	for (i = 0; i < 32; i++)
	{
		j = ((b << (31 - i)) & n); 
	/* set a single bit at position corresponding to current iteration */
	/* and isolates the bit at the current position of interest in n */

		if (j >> (31 - i))
			num = 1;/* if statement to remove leading zeros */
		
		if (num)
		{
			z = j >> (31 - i);
			_putchar(z + 48);
			charCount++;
		}
	}

	if (charCount == 0)
	{
		charCount++;
		_putchar('0');
	}

	return (charCount);
}

