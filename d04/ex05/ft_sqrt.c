/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 13:00:40 by mpaillot          #+#    #+#             */
/*   Updated: 2018/02/22 16:50:48 by mpaillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int res;

	res = 0;
	if ((nb < 0) || (nb == 0))
		return (0);
	else
		while (res * res <= nb)
		{
			if (res * res == nb)
				return (res);
			res++;
		}
	if (nb % res == 0)
		return (res);
	else
		return (0);
}
