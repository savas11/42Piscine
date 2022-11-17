#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int			main(void)
{
	char	source[] ="Source burada";
	char	destin[] ="Destanation burada";
	char	*dest;

	printf("Önce\n\tscr: %s\n\tdes: %s\n",source,destin);

	dest = ft_strcpy(destin,source);

	printf("Sonra\n\tsrc : %s\n\tdes :%s\n",source,dest);
	return (0);
}

