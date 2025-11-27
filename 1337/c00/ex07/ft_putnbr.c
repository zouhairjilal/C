#include <unistd.h>

void	ft_putn(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb < 10)
		ft_putn(nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putn(nb % 10);
	}
}

int	main(void)
{
	ft_putnbr(0);
	// ft_putnbr(-1337);
	return (0);
}
