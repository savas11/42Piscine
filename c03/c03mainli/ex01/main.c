#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	char s1[] = "aaa";
	char s2[] = "Aaa";
  

  printf("s1 ve s2 ascii kod karakter farkı ; %d" , ft_strncmp(s1, s2, 1));

}

