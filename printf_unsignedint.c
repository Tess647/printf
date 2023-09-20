#include "main.h"

/**
  *printf_unsignedint - print an unsigned integer
  *@list_args: input argument
  *Return: number of printed digits
  */
int printf_unsignedint(va_list list_args)
{
	long int num = va_arg(list_args, unsigned int);
	long int temp = num, i;
	long int numofdigits = 1;
	long int last = temp % 10;
	int charcount = 0;

	char *str;

	if (last < 0)
	{
		num = -num;
		temp = -temp;
		last = -last;
	}

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

	for (i = numofdigits - 1; i >= 0; i--)
	{
		_putchar(str[i] + '0');
	}

	charcount = numofdigits;
	free(str);
	return (charcount);
}
