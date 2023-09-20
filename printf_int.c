#include "main.h"

/**
  * printf_int - prints integer
  * @list_args: input argument
  * Return: number of characters printed
  */
int printf_int(va_list list_args)
{
	int p = va_arg(list_args, int);
	int num, last_digit = p % 10, digit;
	int charCount = 1, e = 1;

	p = p / 10;
	num = p;

	if (last_digit < 0)
	{
		_putchar('-');
		num = -num;
		last_digit = -last_digit;
		charCount++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			e = e * 10;
			num = num / 10;
		}
		num = p;

		while (e > 0)
		{
			digit = num / e;
			_putchar(digit + '0');
			num = num - (digit * e);
			e = e / 10;
			charCount++;
		}
	}
	_putchar(last_digit + '0');

	return (charCount);
}
