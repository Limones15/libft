/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:59:33 by jlimones          #+#    #+#             */
/*   Updated: 2023/02/27 11:04:19 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief compara n caracteres de dos string
 * 
 * @param s1 string 1
 * @param s2 string 2
 * @param n numero de caracteres a comparar
 * @return int difererncia en el caracter encontrado
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && s1[i] && s2[i]
		&& (*(unsigned char*)(s1 + i) == *(unsigned char*)(s2 + i)))
		i++;
	if ((i >= n) || (!s1[i] && !s2[i]))
		return (0);
	else
		return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
