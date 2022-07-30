/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lx16.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:56:18 by tpongrit          #+#    #+#             */
/*   Updated: 2022/07/30 15:11:55 by tpongrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr_lx16(unsigned int n)
{
	unsigned int	num;
	char			i;
	int				j;

	num = n;
	if (num >= 16)
		ft_putnbr_lx16(num / 16);
	if (num % 16 >= 10)
		i = (num % 16) + 87;
	else
		i = (num % 16) + 48;
	j = write(1, &i, 1);
	return (j);
}
/*
#include <stdio.h>
int	main()
{
	ft_putnbr_lx16(1234567891234);
	printf("\n%x", 1234567891234);
}
*/
