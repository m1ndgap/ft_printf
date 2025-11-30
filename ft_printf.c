/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:06:09 by tchumbas          #+#    #+#             */
/*   Updated: 2025/11/30 14:38:00 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int output_id(const char *format, va_list args)
{
	int len;

	len = 0;
	if (!args)
		return(1);
	if (*format == 'c')
		return(len);
	else if (*format == '%')
		return(len);
	return(len);
}

int		ft_printf(const char *format, ...)
{
	va_list args;
	int i;

	if (!format)
		return (1);
	i=0;
	va_start(args, format);
	while (format[i]){
		printf("%c", format[i]);
	}
	return (1);
}
