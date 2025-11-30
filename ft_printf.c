/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:06:09 by tchumbas          #+#    #+#             */
/*   Updated: 2025/11/30 18:05:37 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	output_id(const char *format, va_list *args)
{
	int	len;

	len = 0;
	if (!args)
		return (1);
	if (*format == 'c')
		return (ft_printchr(va_arg(*args, int)));
	else if (*format == '%')
		return (ft_printchr('%'));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (!format)
		return (1);
	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += output_id(&format[i + 1], &args);
			i++;
		}
		else
			len += ft_printchr(format[i]);
		i++;
	}
	return (len);
}
