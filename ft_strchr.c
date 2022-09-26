/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 07:29:26 by jlimones          #+#    #+#             */
/*   Updated: 2022/09/26 09:28:06 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while ((*(str + i) != (char)c) && (*(str + i) != '\0'))
		i++;
	if (*(str + i) == (char)c)
		return (str + i);
	else
		return (NULL);
}
