#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main()
{
	char src[] = "Savas";
	char dest[] = "Ozgur ";
	printf("%s", ft_strcat(dest, src));
}

