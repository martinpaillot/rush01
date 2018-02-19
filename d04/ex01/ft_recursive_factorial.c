/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:57:36 by mpaillot          #+#    #+#             */
/*   Updated: 2018/02/16 15:03:50 by mpaillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int res;

	res = nb;
	if ((nb == 0) || (nb == 1))
		return (1);
	if ((nb > 12) || (nb < 1))
		return (0);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
