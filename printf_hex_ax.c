#include "main.h"

/**
 * printf_hex_ax - prints an hexgecimal number.
 * @num: arguments.
 * Return: count.
 */
int printf_hex_ax(unsigned long int num)
{
	long int i, *arr, count = 0;
	unsigned long int t_num = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));

	for (i = 0; i < count; i++)
	{
		arr[i] = t_num % 16;
		t_num /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
