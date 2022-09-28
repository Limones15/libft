/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:26:03 by jlimones          #+#    #+#             */
/*   Updated: 2022/09/28 15:27:28 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_substring(char const *s, char c)
{
	int	i;
	int	count_sub;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (!s[i])
		return (0);
	count_sub = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count_sub++;
		i++;
	}
	return (count_sub);
}

static char	*ft_calloc_string(char const *s, char c)
{
	char	*sub;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	sub = ((char *)ft_calloc(sizeof(char), i + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		sub[i] = s[i];
		i++;
	}
	return (sub);
}

char	**ft_split(char const *s, char c)
{
	int		subs;
	int		i;
	char	**str;

	i = 0;
	if (!s)
		return (NULL);
	subs = ft_count_substring(s, c);
	str = (char **)ft_calloc(sizeof(char *), (subs + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			str[i] = ft_calloc_string(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}	
	}
	return (str);
}
