/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:45:14 by jlimones          #+#    #+#             */
/*   Updated: 2023/02/27 10:19:32 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * @brief coloca el caracter c en n caracteres convertidos a unsigned char 
 * 
 * @param b string en la que copiar
 * @param c caracter que copiar
 * @param len tamaño que copiar
 * @return void* 
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len)
	{
		ptr[len -1] = c;
		len--;
	}
	return (b);
}
