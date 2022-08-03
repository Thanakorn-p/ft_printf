/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:57:47 by tpongrit          #+#    #+#             */
/*   Updated: 2022/07/31 07:43:25 by tpongrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_id(int n)
{
	int		l;
	long	num;
	char	i;

	l = 0;
	num = (long)n;
	if (num < 0)
	{
		l += write(1, "-", 1);
		num *= -1;
	}
	if (num >= 10)
		l += ft_putnbr_id(num / 10);
	i = (num % 10) + '0';
	l += write(1, &i, 1);
	return (l);
}
/*
#include <stdio.h>
int	main()
{
	ft_putnbr_id(-5000);
}
*/
/*
flag i and d
*/
