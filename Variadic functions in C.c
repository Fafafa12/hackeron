#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000

/*
In this problem, you will implement three variadic functions named ,
		and  to calculate sums, minima,
	maxima of a variable number of arguments. The first argument passed to the variadic function is the count of the number of arguments,
	which is followed by the arguments themselves.
*/
int	sum(int count, ...)
{
	va_list	args;
	int		sum;

	va_start(args, count);
	sum = 0;
	while (count--)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}

int	min(int count, ...)
{
	va_list	args;
	int		min;
	int		temp;

	va_start(args, count);
	min = va_arg(args, int);
	while (count--)
	{
		temp = va_arg(args, int);
		if (temp < min)
			min = temp;
	}
	va_end(args);
	return (min);
}

int	max(int count, ...)
{
	va_list	args;
	int		temp;
	int		max;

	va_start(args, count);
	max = va_arg(args, int);
	while (count--)
	{
		temp = va_arg(args, int);
		if (temp > max)
			max = temp;
	}
	va_end(args);
	return (max);
}
