/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 13:00:40 by mpaillot          #+#    #+#             */
/*   Updated: 2018/02/17 16:26:20 by mpaillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int res;
	
	res = 0;
	if (nb < 0) || (nb == 0)
		 return (0);
	
	else
		while (res * res  <= nb)
		{
			if (res * res == nb)
				return (res);
			res++;
		}
//	if (nb % res == 0)
//		return (res);
//
//	else 
		return (0);
}

int	main()
{
	printf("%d\n", ft_sqrt(31));
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(16));
}
