/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:07:00 by tpongrit          #+#    #+#             */
/*   Updated: 2022/07/31 07:39:27 by tpongrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_p(unsigned long n)
{
	unsigned long	num;
	char			i;
	int				j;

	j = 0;
	num = n;
	if (num >= 16)
		j += ft_putnbr_p(num / 16);
	if (num % 16 >= 10)
		i = (num % 16) + 87;
	else
		i = (num % 16) + 48;
	j += write(1, &i, 1);
	return (j);
}
/*
#include <stdio.h>
int	main()
{
	ft_putnbr_p(11221212122121212);
	printf("\n%p", 11221212122121212);
}
*/
