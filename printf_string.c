#include "main.h"

/**
  * printf_string - print a string.
  * @list_args: input argument
  * Return: length of the string
  */
int printf_string(va_list list_args)
{
	char *str;
	int i, length;

	str = va_arg(list_args, char *);
	if (str == NULL)
	{
		s = "(null)";
		len = strlen(str);
		write(1, str, len);
		return (len);
	}
	else
	{
		len = strlen(str);
		write(1, str, len);
		return (len);
	}
}
