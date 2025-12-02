/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:06:09 by tchumbas          #+#    #+#             */
/*   Updated: 2025/12/02 15:34:05 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	output_id(char format, va_list *args)
{
	if (format == '%')
		return (printchr('%'));
	else if (format == 'c')
		return (printchr(va_arg(*args, int)));
	else if (format == 's')
		return (printstr(va_arg(*args, char *)));
	else if (format == 'd' || format == 'i')
		return (printnbr(va_arg(*args, int)));
	else if (format == 'u')
		return (printbase(va_arg(*args, unsigned int), 10, "0123456789"));
	else if (format == 'x')
		return (printbase(va_arg(*args, unsigned int), 16, "0123456789abcdef"));
	else if (format == 'X')
		return (printbase(va_arg(*args, unsigned int), 16, "0123456789ABCDEF"));
	else if (format == 'p')
		return (printadr(va_arg(*args, void *)));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	if (!format)
		return (-1);
	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += output_id(format[++i], &args);
		}
		else
			len += printchr(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
