#include "main.h"

/**
 * printf_rev string- function that prints a str in reverse
 * @list_args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int printf_revstring(va_list list_args)
{
	char *str = va_arg(list_args, char*);
	int i, count = 0;

	if (str == NULL)
		str = "(null)";
	while (str[count] != '\0')
		count++;
	for (i = count - 1; i >= 0; i--)
		_putchar(str[i]);
	return (count);
}
