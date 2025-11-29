#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int var = 55;
	printf("before = %d\n", var);
	
	ft_ft(&var);
	printf("after= %d\n", var);

	return 0;
}
