#include <unistd.h>
#include <stdio.h>

void	ft_putn(int nb);
void	ft_putnbr(char* nb);
int		ft_pow(int n, int b);

void ft_print_combn(int n)
{
	int		smallest_digit;
	int		largest_digit;
	int		i;

	smallest_digit = ft_pow(10, n-1);
	largest_digit = ft_pow(10, n) - 1;
	i = smallest_digit;

	while (i <= largest_digit)
	{
		printf("%d ", i );
		i++;
	}

		// printf("%d", i);
}

int	main(void)
{
	// ft_putn(0);
	// ft_print_combn(3);
	ft_putnbr(007);
	// printf("%d", ft_pow(5, 2) );
	return 0;
}



int	ft_pow(int n, int b)
{
	int		result;

	result = 1;
	while (b > 0)
	{
		result = result * n;
		b--;
	}	
	return (result);
}

void	ft_putn(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void  ft_putnbr(char* nb)
{
    printf("%s ", nb);
	// char	c;
	//
	//  if (nb == 0)
	//  {
	//    // ft_putn(0);
	//    printf("z");
	//  }
	//
	//  if (nb < 0)
	// {
	// 	nb *= -1;
	// 	write(1, "-", 1);
	// }
	// if (nb < 10)
	// 	ft_putn(nb);
	// else
	// {
	// 	ft_putnbr(nb / 10);
	// 	ft_putn(nb % 10);
	// }
}
