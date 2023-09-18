#include "main.h"

/**
  * _printf - function produces output according to a format string
  * @format: argument string to be printed
  *
  * Return: number of characters printed otherwise -1
  */
int _printf(const char *format, ...)
{
	int totalChar = 0, i = 0, len;
	char c, *s;
	va_list list_args;

	va_start(list_args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				c = va_arg(list_args, int);
				_putchar(c);
				totalChar++;
				break;
			case 's':
				s = va_arg(list_args, char*);
				len = strlen(s);
				write(1, s, len);
				totalChar += len;
				break;
			case '%':
				_putchar('%');
				totalChar++;
				break;
			default:
				_putchar(format[i]);
				totalChar++;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			totalChar++;
		}
		i++;
	}

	va_end(list_args);
	return (totalChar);
}
