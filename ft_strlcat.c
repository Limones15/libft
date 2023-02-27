/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:38:32 by jlimones          #+#    #+#             */
/*   Updated: 2023/02/27 10:30:00 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copia una cadena en otra y devuelve su tamaño
 * 
 * @param dst destino
 * @param src string
 * @param size tamaño que copiar
 * @return size_t tamaño de la copia
 */
size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	rt;

	i = 0;
	y = ft_strlen(dst);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	rt = ft_strlen(dst) + ft_strlen(src);
	while (src[i] && y < (size - 1))
	{
		dst[y] = src[i];
		y++;
		i++;
	}
	*(dst + y) = '\0';
	return (rt);
}
