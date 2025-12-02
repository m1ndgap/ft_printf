/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:21:36 by tchumbas          #+#    #+#             */
/*   Updated: 2025/12/02 15:35:18 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	printbase(t_long n, t_long value, char *symbols)
{
	int		i;

	i = 0;
	if (n >= value)
		i += printbase(n / value, value, symbols);
	i += printchr(symbols[n % value]);
	return (i);
}