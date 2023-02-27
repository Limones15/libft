/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:10:58 by jlimones          #+#    #+#             */
/*   Updated: 2023/02/27 09:53:31 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Encuentra la primer coincidencia con c (lo convierte a unsigned char)
 * 
 * @param s string en la que buscar
 * @param c dato que buscar
 * @param n numero de cararcters hasta el que buscar
 * @return void* la direccion de memoria de la coincidencia onulo en 
 * caso de que no la haya
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
