#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "Source string.";
	char dest[] = "Destination string.";
	unsigned int n;
	
	n = 2;

	printf("Önce\n\tsrc: %s\n\tdes: %s\n", src,dest);

	ft_strncpy(dest, src, n);

	printf("After\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}