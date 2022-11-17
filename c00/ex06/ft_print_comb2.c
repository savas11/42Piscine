/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavas <osavas@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:53:10 by osavas            #+#    #+#             */
/*   Updated: 2021/11/30 16:34:30 by osavas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yaz(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	sol;
	int	sag;

	sol = 0;
	sag = 1;
	while (sol <= 98)
	{
		sag = sol + 1;
		while (sag <= 99)
		{
			yaz((sol / 10) + 48);
			yaz((sol % 10) + 48);
			write(1, " ", 1);
			yaz((sag / 10) + 48);
			yaz((sag % 10) + 48);
			if (sol != 98 || sag != 99)
			{
				write(1, ", ", 2);
			}
			sag++;
		}
		sol++;
	}
}
