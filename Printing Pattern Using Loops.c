#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	print_row(int row_num, int n, int max_col)
{
	int	i;
	int	var;
	int	med;
	int	val;

	i = 1;
	var = 0;
	med = (max_col / 2) + 1;
	val = n + 1;
	while (i <= max_col)
	{
		if (row_num > med)
			row_num = max_col - row_num + 1;
		if (i <= med)
		{
			if (var < row_num)
			{
				val -= 1;
				var++;
			}
		}
		else
		{
			if ((max_col - i + 1) < var)
				val++;
		}
		printf("%d", val);
		if (i != max_col)
			printf(" ");
		i++;
	}
}

void	print_it(int n, int row)
{
	int	i;
	int	med;

	i = 1;
	med = (row / 2) + 1;
	while (i <= row)
	{
		print_row(i, n, row);
		if (i != row)
			printf("\n");
		i++;
	}
}

int	main(void)
{
	int n;
	scanf("%d", &n);
	// Complete the code to print the pattern.
	print_it(n, (n * 2) - 1);
	return (0);
}