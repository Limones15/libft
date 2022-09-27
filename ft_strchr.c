/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 07:29:26 by jlimones          #+#    #+#             */
/*   Updated: 2022/09/27 19:32:46 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)str;
	i = 0;
	while ((*(ptr + i) != (char)c) && (*(ptr + i) != '\0'))
		i++;
	if (*(ptr + i) == (char)c)
		return (ptr + i);
	else
		return (NULL);
}
