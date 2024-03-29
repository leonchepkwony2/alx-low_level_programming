#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all it parameters
 * @n: number of variables
 * @... : varibale number of parameters
 *
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
