#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main (void)
{
	char src[] = "123";
    	char dest [] = "4567890";
    printf("%i \n", ft_strlcat(dest, src, 5));
}
