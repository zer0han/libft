/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:58:43 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/20 17:58:46 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	int				i;

	i = 0;
	s = (unsigned char *)str;
	while (s[i] != '\0' && i < n)
	{
		if (s[i] == c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
