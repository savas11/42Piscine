#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

	int count = ft_strlen(str);
	
	printf("%d\n", count);
}
