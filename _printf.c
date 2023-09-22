#include "main.h"

/**
  * _printf - function produces output according to a format string
  * @format: argument string to be printed
  *
  * Return: number of characters printed otherwise -1
  */
int _printf(const char *format, ...)
{
	match_block mb[] = {
		/*Array of conversion specifiers and their corresponding functions*/
		{"%s", printf_string},
		/*{"%S", printf_String},*/
		{"%c", printf_char},
		{"%%", printf_percent},
		{"%d", printf_signedint},
		{"%i", printf_int},
		{"%u", printf_unsignedint},
		{"%b", printf_bin},
		{"%o", printf_octal},
		{"%x", printf_hex},
		{"%X", printf_Hex},
		{"%p", printf_pointer},

	};

	va_list list_args;
	int i = 0, j;
	int totalChar = 0; /*Initialize character count to 0*/

	va_start(list_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 10; /*Initialize 'j' to the last index of 'm' array*/
		while (j >= 0)
		{
			if (mb[j].spec[0] == format[i] && mb[j].spec[1] == format[i + 1])
			{
				/* Format the output and write it to the buffer */
				totalChar += mb[j].func(list_args);
				i = i + 2;
				goto Here;
			}
			j--;
		}

		_putchar(format[i]);
		totalChar++; /* Update character count for regular character */
		i++;
	}

	va_end(list_args);
	return (totalChar); /* Return the total character count */
}
