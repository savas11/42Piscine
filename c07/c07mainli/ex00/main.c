#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Merhaba malloc";
	printf("%s = %p\n", str, str);
	allocated = ft_strdup(str);
}
