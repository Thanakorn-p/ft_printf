/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:55:13 by tpongrit          #+#    #+#             */
/*   Updated: 2022/07/30 10:23:53 by tpongrit         ###   ########.fr       */
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
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	size_t	i;
	i = ft_strlen(argv[1]);
	printf("%zu\n", i);
}
*/
