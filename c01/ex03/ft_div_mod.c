void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int mod;
	int div;

	a = 42;
	b = 21;

	printf("a : %d, b : %d\n", a, b);

	ft_div_mod(a, b, &div, &mod);

	printf("a : %d, b : %d, div : %d, mod : %d\n", a, b, div, mod);
}

