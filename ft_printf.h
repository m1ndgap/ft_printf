/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:08:00 by tchumbas          #+#    #+#             */
/*   Updated: 2025/12/02 17:20:44 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

typedef unsigned long long	t_long;

int	ft_printf(const char *format, ...);
int	printchr(char c);
int	printbase(t_long n, t_long value, char *symbols);
int	printstr(const char *str);
int	printnbr(int n);
int	printadr(void *ptr);

#endif