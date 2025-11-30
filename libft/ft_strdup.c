/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 00:24:43 by tchumbas          #+#    #+#             */
/*   Updated: 2025/11/03 18:08:37 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		len;

	len = 0;
	while (s[len] != '\0')
		len++;
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
	{
		dup[len] = s[len];
		len++;
	}
	dup[len] = '\0';
	return (dup);
}
