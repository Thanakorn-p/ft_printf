/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:36:54 by tpongrit          #+#    #+#             */
/*   Updated: 2022/07/30 15:14:37 by tpongrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int				l;
	unsigned long	num;
	char			i;

	num = n;
	if (num >= 10)
		ft_putnbr_u(num / 10);
	i = (num % 10) + '0';
	l = write(1, &i, 1);
	return (l);
}
/*
#include <stdio.h>
int	main()
{
	ft_putnbr_u(9223372036854775807);
	printf("\n%u\n", 9223372036854775807);
}
*/
