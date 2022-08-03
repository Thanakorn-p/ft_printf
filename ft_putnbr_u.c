/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:36:54 by tpongrit          #+#    #+#             */
/*   Updated: 2022/07/31 12:15:12 by tpongrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int				l;
	unsigned long	num;
	char			i;

	l = 0;
	num = n;
	if (num >= 10)
		l += ft_putnbr_u(num / 10);
	i = (num % 10) + '0';
	l += write(1, &i, 1);
	return (l);
}

// #include <stdio.h>
// int	main()
// {
// 	ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// 	printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// }

