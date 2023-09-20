#include "main.h"

/**
  * _printf - function produces output according to a format string
  * @format: argument string to be printed
  *
  * Return: number of characters printed otherwise -1
  */
int _printf(const char *format, ...)
{
	PrintBuffer buffer; /* Declare a buffer struct */

	match_block mb[] = {
		/*Array of conversion specifiers and their corresponding functions*/
		{"%s", printf_string},
		{"%S", printf_String},
		{"%c", printf_char},
		{"%%", printf_percent},
		{"%d", printf_signedint},
		{"%i", printf_int},
		{"%u", printf_unsignedint},
		{"%b", printf_bin},
		{"%o", printf_octal},
		{"%x", printf_hex},
		{"%X", printf_Hex},

	};

	va_list list_args;
	int i = 0, j;
	int totalChar = 0; /*Initialize character count to 0*/

	va_start(list_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	initPrintBuffer(&buffer); /* Initialize the buffer */


Here:
	while (format[i] != '\0')
	{
		j = 9; /*Initialize 'j' to the last index of 'm' array*/
		while (j >= 0)
		{
			if (mb[j].spec[0] == format[i] && mb[j].spec[1] == format[i + 1])
			{
				/* Format the output and write it to the buffer */
				int formatted_len = mb[j].func(list_args, &buffer);
				totalChar += formatted_len;/*Update character count*/
				i = i + 2;
				goto Here;
			}
			j--;
		}

		/* Append regular characters to the buffer */
		writeCharToBuffer(&buffer, format[i]);
		totalChar++; /* Update character count for regular character */
		i++;

		/* Flush any remaining data in the buffer */
		write(1, buffer.data, buffer.position);
		totalChar += buffer.position; /* Update character count */
	}

	va_end(list_args);
	return (totalChar); /* Return the total character count */
}
