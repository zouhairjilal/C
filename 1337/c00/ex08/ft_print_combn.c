#include <unistd.h>
#include <stdio.h>

int    ft_print_combn(int n);
void	ft_first_group(int *arr, int n);
void	ft_print_digits(int digits[], int n);

int	main(void)
{
	ft_print_combn(3);
	return 0;
}


int    ft_print_combn(int n)
{
    int digits[10];
    int i;

	ft_first_group(digits, n);

	ft_print_digits(digits, n);

//	if (0 < n && n < 10)
 

}
////////////////////////




void	ft_first_group(int *arr, int n)
{
	int	i;

	i = 0;

	while (i < n)
	{
		arr[i] = i;
		i++;
	}
}

void	ft_print_digits(int digits[], int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = digits[i] + '0';
		write(1, &c, 1);
		i++;
	}
}
