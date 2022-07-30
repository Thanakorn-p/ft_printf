/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:57:47 by tpongrit          #+#    #+#             */
/*   Updated: 2022/07/30 10:12:55 by tpongrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_id(int n)
{
	int		l;
	long	num;
	char	i;

	num = (long)n;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr_id(num / 10);
	i = (num % 10) + '0';
	l = write(1, &i, 1);
	return (l);
}
/*
#include <stdio.h>
int	main()
{
	ft_putnbr_fd(5000);
}
*/
/*
flag i and d
*/
