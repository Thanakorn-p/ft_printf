/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:13:05 by tpongrit          #+#    #+#             */
/*   Updated: 2022/07/21 20:30:44 by tpongrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!*str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putstr_s(char *c)
{
	int	i;

	if (!*c)
		return (0);
	i = write(1, c, ft_strlen(c));
	return (i);
}
/*
int	main()
{
	ft_putstr_s("Hello_world12345!@#$%%");
}
*/
