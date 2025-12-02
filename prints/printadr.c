/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printadr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:21:39 by tchumbas          #+#    #+#             */
/*   Updated: 2025/12/02 17:22:17 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	printadr(void *ptr)
{
	t_long	addres;
	int		count;

	if (!ptr)
		return (printstr("(nil)"));
	count = 0;
	addres = (t_long)ptr;
	count += printstr("0x");
	count += printbase(addres, 16, "0123456789abcdef");
	return (count);
}
