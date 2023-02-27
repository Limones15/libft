/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:53:59 by jlimones          #+#    #+#             */
/*   Updated: 2023/02/27 10:15:37 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * @brief copia n caracteres del final de una cadena
 * 
 * @param dst destino de la copia
 * @param src string a copiar
 * @param len numero de caracteres a copiar
 * @return void* puntero a la copia
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	s = (char *)src;
	d = (char *)dst;
	if (d > s)
	{
		i = len;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else if (d < s)
	{
		i = 0;
		while (i < len)
		{
				d[i] = s[i];
				i++;
		}
	}
	return (dst);
}
