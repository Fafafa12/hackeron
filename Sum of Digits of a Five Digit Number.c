#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Task

Given a five digit integer, print the sum of its digits.
*/
int	sum_of_digits(int n)
{
	int	sum;

	sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return (sum);
}

int	sun_of_digits_recursive(int n)
{
	if (n == 0)
		return (0);
	return (n % 10 + sun_of_digits_recursive(n / 10));
}
int	main(void)
{
	int n;
	scanf("%d", &n);
	// Complete the code to calculate the sum of the five digits on n.
	return (0);
}