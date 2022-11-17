/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavas <osavas@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:59:49 by osavas            #+#    #+#             */
/*   Updated: 2021/12/08 17:23:39 by osavas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*area;
	char	*find;

	if (*to_find == '\0')
		return (str);
	area = str;
	find = to_find;
	while (1)
	{
		if (*find == '\0')
			return ((char *)(area - (find - to_find)));
		if (*area == *find)
			find++;
		else
			find = to_find;
		if (*area == '\0')
			break ;
		area++;
	}
	return (0);
}
