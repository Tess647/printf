#include "main.h"

/**
 * printf_pointer - prints an hexgecimal number.
 * @list_args: arguments.
 * Return: counter.
 */
int printf_pointer(va_list list_args)
{
	void *ptr;
	char *str = "(nil)";
	long int a;
	int b, i;

	ptr = va_arg(list_args, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (1);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = printf_hex_ax(a);
	return (b + 2);
}
