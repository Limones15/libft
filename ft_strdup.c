/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 07:53:19 by jlimones          #+#    #+#             */
/*   Updated: 2023/02/27 10:24:00 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief duplica una string.
 * 
 * @param s string a duplicar
 * @return char* puntero a la nueva string.
 */
char	*ft_strdup(const char *s)
{
	char	*d;

	d = malloc (ft_strlen(s) + 1);
	if (d == NULL)
		return (NULL);
	ft_memcpy (d, s, ft_strlen(s) + 1);
	return (d);
}
