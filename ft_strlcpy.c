/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:52:53 by jlimones          #+#    #+#             */
/*   Updated: 2023/02/27 10:32:26 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copia en dst el tamañode de src pasado por parametros
 * 
 * @param dst destino de la copia
 * @param src string a copiar
 * @param size tamaño a copiar
 * @return size_t tamaño de la copia
 */
size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	unsigned long	y;

	y = ft_strlen(src);
	if (size <= 0)
		return (y);
	while ((size-- > 1) && (*src))
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (y);
}
