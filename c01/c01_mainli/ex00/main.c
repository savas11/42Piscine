#include <stdio.h>

void ft_ft();

int	main()
{
	int s ;
	int *p ;

	s = 1903 ;
	p = &s ;

	ft_ft(p);
	printf("%d\n", s);
	return (0);
}
