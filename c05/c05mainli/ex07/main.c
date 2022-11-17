#include <stdio.h>

int	ft_find_next_prime(int nb);

int main (void)
{
	int j ;

	j = 11 ;
	printf("%d -> %d\n", j, ft_find_next_prime(j));

	return (0);
}
