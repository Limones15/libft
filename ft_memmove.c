/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:53:59 by jlimones          #+#    #+#             */
/*   Updated: 2022/09/21 17:18:18 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	if (dst == NULL && src == NULL)
		return (NULL);
	s = src;
	d = dst;
	if (dst > src)
	{
		i = len;
		while (i-- > 0)
			d[i - 1] = s[i - 1];
	}
	else if (dst < src)
	{
		i = 0;
		while (i++ < len)
			d[i] = s[i];
	}
	return (dst);
}
