#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
  *printf_signedint - print a signed int
  *@list_args: input argument
  *Return: print count
  */
int printf_signedint(va_list list_args)
{
	signed int num = va_arg(list_args, signed int);
	int temp = num, i;
	int numofdigits = 1;
	int charcount = 0;
	char *str;

	while (temp /= 10)
		numofdigits++;

	str = malloc(numofdigits + 2);

	if (!str)
		return (-1);

	str[numofdigits + 1] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}

	for (i = numofdigits; i >= 0; i--)
	{
		str[i] = '0' + (num % 10);
		num /= 10;
	}
	charcount = numofdigits + 1;
	write(1, str, numofdigits + 1);
	free(str);
	return (charcount);
}
