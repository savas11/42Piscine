/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_numeric.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavas <osavas@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:06:02 by osavas            #+#    #+#             */
/*   Updated: 2021/12/06 14:18:58 by osavas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	str_numeric;

	str_numeric = 1 ;
	i = 0 ;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			str_numeric = 0 ;
		}
		i++;
	}
	return (str_numeric);
}
