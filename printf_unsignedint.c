#include "main.h"

/**
  *printf_unsignedint - print an unsigned integer
  *@list_args: input argument
  *Return: number of printed digits
  */
int printf_unsignedint(va_list list_args)
{
	unsigned int num = va_arg(list_args, unsigned int);
	int temp = num, i;
	int numofdigits = 1;
	int charcount = 0;
	char *str;

	while (temp /= 10)
		numofdigits++;

	str = malloc(numofdigits + 1);
	if (!str)
		return (-1);

	str[numofdigits] = '\0';

	for (i = 0; i < numofdigits; i++)
	{
		str[i] = num % 10;
		num /= 10;
	}

	for (i = numdigits - 1; i >= 0; i--)
	{
		_putchar(str[i] + '0');
	}

	charcount = numofdigits;
	free(str);
	return (charcount);
}
