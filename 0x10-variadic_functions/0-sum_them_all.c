#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of n
 * @n: variable to sum
 * Return: sum of n
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}

	va_end(args);
	return (sum);
}
