#include <stdio.h>

/*
Task

Complete the function void update(int *a,int *b). It receives two integer pointers,
	int* a and int* b. Set the value of  to their sum,
	and  to their absolute difference. There is no return value,
	and no return statement is needed.
*/

void	update(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a + *b;
	*b = tmp - *b;
	if (*b < 0)
		*b = *b * -1;
}

int	main(void)
{
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);

	return (0);
}