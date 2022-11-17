#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *text[10];

	text[0] = "test0";
	text[1] = "test1";
	text[2] = "test2";
	text[3] = "test3";
	text[4] = "test4";
	text[5] = "test5";
	text[6] = "test6";
	text[7] = "test7";
	text[8] = "test8";
	text[9] = "test9";

	printf("%s\n", ft_strjoin(10, text, " - "));
}
