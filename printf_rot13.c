#include "main.h"

/**
 * printf_rot13 - printf str to ROT13 place into buffer
 * @list_args: type struct va_arg where is allocated printf arguments
 * Return: count
 */
int printf_rot13(va_list list_args)
{
	int i, j, count = 0;
	int l = 0;
	char *str = va_arg(list_args, char*);
	char first[] = {"abcdefghijklmnoopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char second[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		l = 0;
		for (j = 0; first[j] && !l; j++)
		{
			if (str[i] == first j])
			{
				_putchar(second[j]);
				count++;
				l = 1;
			}
		}
		if (!l)
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
