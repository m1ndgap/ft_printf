/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 20:58:54 by tchumbas          #+#    #+#             */
/*   Updated: 2025/11/03 18:09:07 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ib;
	size_t	litlen;

	ib = 0;
	litlen = ft_strlen(little);
	if (!little || little[0] == '\0')
		return ((char *)big);
	if (len > 0 && *big && *little)
	{
		while (ib < len && *(big + ib) != '\0')
		{
			if (ft_strncmp(big + ib, little, litlen) == 0
				&& ib + litlen - 1 < len)
				return ((char *)(big + ib));
			ib++;
		}
	}
	return (NULL);
}
