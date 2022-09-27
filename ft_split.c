/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:26:03 by jlimones          #+#    #+#             */
/*   Updated: 2022/09/27 20:58:06 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t		i;
	char		*subs;

	i = 0;
	if (!s || !c)
		return (NULL);
	while (s[i] != '\0')
	{
		while (!(ft_strchr(s, c)) && i <= ft_strlen(s))
		{
			subs = ft_strdup(subs);
		}
	i++;
	}
	return ((char **)subs);
}
