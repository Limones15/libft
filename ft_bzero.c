/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:04:14 by jlimones          #+#    #+#             */
/*   Updated: 2023/02/27 09:39:38 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * @brief convierte n caracteres de una string y los rellena de 0.
 * 
 * @param s variable vacia
 * @param n numero de caracters a convertir
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n)
	{
		ptr[n -1] = 0;
		n--;
	}
}
