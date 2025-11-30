/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:54:40 by tchumbas          #+#    #+#             */
/*   Updated: 2025/11/03 18:08:34 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	chr;
	char			*p;

	i = 0;
	chr = (unsigned char)c;
	p = (char *)s;
	while (*(p + i))
	{
		if (*(p + i) == chr)
			return (p + i);
		i++;
	}
	if (chr == '\0')
		return (p + i);
	return (NULL);
}
