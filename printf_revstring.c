#include "main.h"

/**
 * printf_srev - function that prints a str in reverse
 * @list_args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int prints_revstring(va_list list_args)
{
	char *str = va_arg(list_args, char*);
	int i, count = 0;

	if (str == NULL)
		str = "(null)";
	while (s[count] != '\0')
		count++;
	for (i = j -1; i >= 0; i--)
		_putchar(s[i]);
	return (count);
}
