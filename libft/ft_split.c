/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:48:50 by tchumbas          #+#    #+#             */
/*   Updated: 2025/11/15 19:49:02 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ctwords(const char *s, char c)
{
	size_t	ct;
	size_t	id;

	id = 0;
	ct = 0;
	while (s[id] != '\0')
	{
		while (s[id] && s[id] == c)
		{
			id++;
		}
		if (s[id] && s[id] != c)
		{
			while (s[id] && s[id] != c)
			{
				id++;
			}
			ct++;
		}
	}
	return (ct);
}

static void	*free_all(char **temp)
{
	int	id;

	if (!temp)
		return (NULL);
	id = 0;
	while (temp[id])
		free(temp[id++]);
	free(temp);
	return (NULL);
}

static char	**presplit(char **arrtemp, char const *s, char c)
{
	unsigned int	id;
	unsigned int	id2;
	unsigned int	iw;

	id = 0;
	iw = 0;
	while (s[id] != '\0')
	{
		if (s[id] && s[id] != c)
		{
			id2 = id;
			while (s[id2] && s[id2] != c)
				id2++;
			arrtemp[iw] = ft_substr(s, id, id2 - id);
			if (!arrtemp[iw])
				return (free_all(arrtemp));
			iw++;
			id = id2;
		}
		else
			id++;
	}
	arrtemp[iw] = NULL;
	return (arrtemp);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
	{
		return (NULL);
	}
	str = malloc(sizeof(char *) * (ctwords(s, c) + 1));
	if (!str)
		return (NULL);
	return (presplit(str, s, c));
}
