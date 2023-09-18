#include "main.h"

/**
  * printf_string - print a string.
  * @list_args: input argument
  * Return: length of the string
  */
int printf_string(va_list list_args)
{
	char *str;
	int length;

	str = va_arg(list_args, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = strlen(str);
		write(1, str, length);
		return (length);
	}
	else
	{
		length = strlen(str);
		write(1, str, length);
		return (length);
	}
}
