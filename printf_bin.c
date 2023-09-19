#include "main.h"

/**
  * printf_bin - function prints integers to binary
  * @ch_args: arguments
  * Return: number of characters
  */
int printf_bin(va_list ch_args)
{
	unsigned int n = va_arg(ch_args, unsigned int);
	unsigned int binNum[32], num;
	int i = 0, charCount = 0, j;

	if (n == 0)
	{
		_putchar('0');
		charCount++;
		return (charCount);
	}
	else
	{
		while (n > 0)
		{
			binNum[i++] = num % 2;
			num /= 2;
			charCount++;
		}

		while (j >= 0)
		{
			j = i - 1;
			j--;
			_putchar(binNum[j]);
		}
	}
	return (charCount);
}

