/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 00:30:58 by tchumbas          #+#    #+#             */
/*   Updated: 2025/11/15 20:32:42 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_uc;
	unsigned char	*src_uc;

	dest_uc = (unsigned char *)dest;
	src_uc = (unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		dest_uc[n - 1] = src_uc[n - 1];
		n--;
	}
	dest = (void *)dest_uc;
	return (dest);
}
