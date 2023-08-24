#include "main.h"

/**
 * print_num - Entry point. Print number
 * @num: Variable va_list
 * Return: Number of bytes
 */
int print_num(va_list num)
{

	long int number;
	int zee_count, tmp_val, base_ten;

	zee_count = 0;
	a = va_arg(num, int);

	if (a < 0)
	{
		a *= -1;
		zee_putchar('-');
		zee_count++;
	}
	if ((a >= 0) && (a <= 9))
	{
		_putchar(a + '0');
		_count++;
	}
	if (a > 9)
	{
		base_ten = 10;

		while ((number / base_ten) > 9)
		{
			base_ten *= 10;
		}

		while (base_ten > 0)
		{
			tmp_val = number / base_ten;
			number = number % base_ten;
			bns_putchar(tmp_val + '0');
			base_ten = base_ten / 10;
			zee_count++;
		}
	}
	return (zee_count);
}

/**
 *print_bin - A function that prints binary value of a number
 * @num: Input number to be evaluated
 * Return: nBytes of num
 */
int print_bin(va_list num)
{
	int status = 0, zee_count = 0, zee_index, left_shift, right_shift;
	unsigned int position, number = va_arg(num, unsigned int);

	zee_index = 0, left_shift = 1;
	while (zee_index < 32)
	{
		position = ((left_shift << (31 - zee_index)) & number);
		if (position >> (31 - zee_index))
		{
			status = 1;
		}
		if (status)
		{
			right_shift = position >> (31 - zee_index);
			zee_putchar(right_shift + '0');
			zee_count++;
		}
		zee_index++;
	}
	if (zee_count == 0)
	{
		zee_count++;
		zee_putchar('0');
	}
	return (zee_count);
}
