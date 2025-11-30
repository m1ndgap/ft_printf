/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:52:12 by tchumbas          #+#    #+#             */
/*   Updated: 2025/11/03 18:08:50 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i_s;
	size_t	lendest;
	size_t	lensrc;

	i_s = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (size > lendest)
	{
		while (i_s < size - lendest - 1 && src[i_s])
		{
			dest[lendest + i_s] = src[i_s];
			i_s++;
		}
		dest[lendest + i_s] = '\0';
		return (lendest + lensrc);
	}
	return (size + lensrc);
}
