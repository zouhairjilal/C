#include <unistd.h>

void	ft_print_num(int n)
{
	char	c1;
	char	c2;

	c1 = n / 10 + '0';
	c2 = n % 10 + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_num(a);
			write(1, " ", 1);
			ft_print_num(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
