#include "main.h"

/**
  * printf_octal - function prints unsigned octal for specifier %c
  * @list_args: input arguments
  * Return: number of characters printed
  */

int printf_octal(va_list list_args)
{
	num = va_arg(list_args unsigned int);
	int *octalArr, count = 0, i;
	unsigned int t_num = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	octalArr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		octalArr[i] = t_num % 8;
		t_num /= 8;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(octalArr[i] + '0');
	}
	free(octalArr);
	return (count);
}
