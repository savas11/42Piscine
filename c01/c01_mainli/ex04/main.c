#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int i;
	int j;
	int *a;
	int *b;

	i = 9;
	j = 4;
	a = &i;
	b = &j;

	printf("a = %d \n", i);
	printf("b = %d \n", j);

	ft_ultimate_div_mod(a, b);

	printf("a/b= %d\n", *a);
	printf("a/b'den Kalan: %d\n", *b);
}
