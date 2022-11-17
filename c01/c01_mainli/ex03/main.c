#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int	a;
	int b;
	int *div;
	int *mod;

	a = 222;
	b = 22 ;
	div = &a ;
	mod = &b ;

	ft_div_mod(a,b,div,mod);
	printf("Verilen sayıların modu : %d\n", *mod);
	printf("Verilen sayıların bölümü : %d\n", *div);
}
