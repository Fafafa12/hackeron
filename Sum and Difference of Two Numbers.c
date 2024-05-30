#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Your task is to take two numbers of int data type,
// two numbers of float data type as input and output their sum:

// Declare  variables: two of type int and two of type float.
// Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
// Use the  and  operator to perform the following operations:
// Print the sum and difference of two int variable on a new line.
// Print the sum and difference of two float variable rounded to one decimal place on a new line.

int	main(void)
{
	int x, y;
	float fx, fy;
	scanf("%d %d", &x, &y);
	scanf("%f %f", &fx, &fy);
	printf("%d %d\n", x + y, x - y);
	printf("%.1f %.1f\n", fx + fy, fx - fy);
	return (0);
}
