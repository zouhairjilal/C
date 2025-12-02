#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
    int a = 10;
    int b = 3;
    int division;
    int remainder;

    ft_div_mod(a, b, &division, &remainder);

    printf("Division: %d\n", division);
    printf("Remainder: %d\n", remainder);

    return 0;
}
