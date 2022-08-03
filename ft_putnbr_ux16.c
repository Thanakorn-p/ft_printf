/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ux16.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:56:21 by tpongrit          #+#    #+#             */
/*   Updated: 2022/07/31 12:15:39 by tpongrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_ux16(unsigned int n)
{
	unsigned int	num;
	char			i;
	int				j;

	j = 0;
	num = n;
	if (num >= 16)
		j += ft_putnbr_ux16(num / 16);
	if (num % 16 >= 10)
		i = (num % 16) + 87 - 32;
	else
		i = (num % 16) + 48;
	j += write(1, &i, 1);
	return (j);
}
/*
#include <stdio.h>
int	main()
{
	ft_putnbr_ux16(1234567891234);
	printf("\n%X", 1234567891234);
}
*/
