#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int digits[] = {0, 1, 2};
	ft_print_nb(digits, 3);
	return 0;
}

void    ft_print_combn(int n)
{
    int digits[10];
    int i;


}


void	ft_print_nb(int digits[], int n)
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
