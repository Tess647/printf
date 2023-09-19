#include "main.h"

/**
  * printf_hex - prints unsigned hex for specifier %x
  * @list_args: input argument
  * Return: number of character printed
  */
int printf_hex(va_list list_args)
{
	int count = 0, i, *hexArr;
	unsigned int num = va_arg(list_args, unsigned int);
	unsigned int t_num = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	hexArr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		hexArr[i] = t_num % 16;
		t_num /= 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (hexArr[i] > 9)
			hexArr[i] = hexArr[i] + 55;
		_putchar(hexArr[i] + '0');
	}

	free(hexArr);
	return (count);
}
