#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the following function.

void	calculate_the_maximum(int n, int k)
{
	int	i;
	int	j;

	int a_max, o_max, x_max = 0;
	i = 1;
	j = 1;
	while (j <= n)
	{
		while (i < n)
		{
			if (i != j)
			{
				if (a_max > i & j && a_max < k)
					a_max = i & j;
				if (o_max > i | j && o_max < k)
					o_max = i | j;
				if (x_max > i ^ j && x_max < k)
					x_max = i ^ j;
			}
		}
	}
	printf("%d\n%d\n%d\n", a_max, o_max, x_max);
}

int	main(void)
{
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	return (0);
}