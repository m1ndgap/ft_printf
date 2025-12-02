/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:21:40 by tchumbas          #+#    #+#             */
/*   Updated: 2025/12/02 17:21:04 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	printnbr(int n)
{
	long	nb;
	int		i;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		i += printchr('-');
		nb = -nb;
	}
	if (nb > 9)
		i += printnbr(nb / 10);
	i += printchr((nb % 10) + 48);
	return (i);
}
