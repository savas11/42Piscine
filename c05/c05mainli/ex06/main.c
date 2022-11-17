#include <stdio.h>

int		ft_is_prime(int nb);

int 	main(void)
{
	int j;

	j = 12 ;
	if (ft_is_prime(j))
		printf("%i asal sayıdır\n" , j);
	else
		printf("%i birleşik sayıdır\n", j);
	return (0);
}
