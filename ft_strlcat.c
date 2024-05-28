/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:52:17 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/20 16:52:19 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	count_src;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen((const char *)dst);
	len_src = ft_strlen((const char *)src);
	if (size < len_dst)
		return (len_src + size);
	else
	{
		count_src = 0;
		while (src[count_src] != '\0' && (len_dst + count_src) < size - 1)
		{
			dst[len_dst + count_src] = src[count_src];
			count_src++;
		}
	}
	dst[len_dst + count_src] = '\0';
	return (len_dst + len_src);
}
