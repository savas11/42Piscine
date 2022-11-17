#include <stdio.h>

void ft_swap(int *a, int *b);

int main()
{
	int c = 1;
	int z = 9;
	int *a = &c;
	int *b = &z;

	ft_swap(a,b);
	printf("c için kullanılan 1 : %u\n", *a);
	printf("z için kullanılan 9 : %u\n", *b);

}
