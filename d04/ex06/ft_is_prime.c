/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:27:39 by mpaillot          #+#    #+#             */
/*   Updated: 2018/02/22 16:46:52 by mpaillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_primr(int nb)
{
	int m;

	m = 0;
	if (nb == 0)
		return (0);
	if ((m == nb % 1) && (m == nb % nb))
		return (0);
	else
		return (1);
}