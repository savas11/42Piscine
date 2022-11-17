#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "Merhabaa yalan dünya herşey bomboşş hancı sarhoş yolcu sarhoşş";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}
