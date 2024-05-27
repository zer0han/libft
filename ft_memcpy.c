/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:51:37 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/20 16:51:41 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*c;
	unsigned char	*s;

	i = 0;
	c = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (i < n)
	{
		c[i] = s[i];
		i++;
	}
	return (dest);
}
