/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:53:45 by tpongrit          #+#    #+#             */
/*   Updated: 2022/08/03 12:46:33 by tpongrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <limits.h>

static	int	printf_tag(const char *str, va_list args, int i)
{
	if (*(str + 1) == 'c')
		i += ft_putchar_c(va_arg(args, int));
	else if (*(str + 1) == 's')
		i += ft_putstr_s(va_arg(args, char *));
	else if (*(str + 1) == 'p')
	{
		i += write(1, "0x", 2);
		i += ft_putnbr_p(va_arg(args, unsigned long));
	}
	else if (*(str + 1) == 'd')
		i += ft_putnbr_id(va_arg(args, int));
	else if (*(str + 1) == 'i')
		i += ft_putnbr_id(va_arg(args, int));
	else if (*(str + 1) == 'u')
		i += ft_putnbr_u(va_arg(args, int));
	else if (*(str + 1) == 'x')
		i += ft_putnbr_lx16(va_arg(args, unsigned int));
	else if (*(str + 1) == 'X')
		i += ft_putnbr_ux16(va_arg(args, unsigned int));
	else if (*(str + 1) == '%')
		i += ft_percent();
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	if (!*str)
		return (0);
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			i = printf_tag(str, args, i);
			str++;
		}
		else
			i += write(1, str, 1);
		str++;
	}
	va_end (args);
	return (i);
}
/*
int	main()
{
	int	a = 567;
	ft_printf("%d\n", a);
}
*/
// #include <stdio.h>
// int	main()
// {
// 	ft_printf("%x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// 	printf("\n%x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// }
