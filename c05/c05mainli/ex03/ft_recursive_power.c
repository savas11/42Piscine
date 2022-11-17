/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavas <osavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 11:07:49 by osavas            #+#    #+#             */
/*   Updated: 2021/12/12 12:59:16 by osavas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
	{
	if (power >= 2)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (nb);
}
