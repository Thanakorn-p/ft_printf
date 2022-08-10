/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lx16.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:56:18 by tpongrit          #+#    #+#             */
/*   Updated: 2022/08/09 09:38:59 by tpongrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr_lx16(unsigned int n)
{
	unsigned int	num;
	char			i;
	int				j;

	j = 0;
	num = n;
	if (num >= 16)
		j += ft_putnbr_lx16(num / 16);
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
	ft_putnbr_lx16(1234567891234);
}
*/
