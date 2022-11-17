#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char src[] = "Savas ozgursavas26@gmail.com";
	char dest[] = "Ozgur ";
	printf("%s", ft_strncat(dest, src, 5));
}
