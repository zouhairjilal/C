#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a,b;

	a = 42;
	b = 52;
	printf("before: a = %d | b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("after: a = %d | b = %d\n", a, b);
	return 0;
}

