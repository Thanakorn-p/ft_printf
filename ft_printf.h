/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpongrit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:23:55 by tpongrit          #+#    #+#             */
/*   Updated: 2022/07/30 19:28:59 by tpongrit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_putchar_c(char c);
int		ft_putstr_s(char *c);
int		ft_putnbr_id(int n);
int		ft_percent(void);
int		ft_putnbr_u(unsigned int n);
int		ft_putnbr_ux16(unsigned int n);
int		ft_putnbr_lx16(unsigned int n);
int		ft_putnbr_p(unsigned long n);
int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *str);

#endif
