/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:50:33 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/27 16:41:50 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int				i;
	unsigned char	*pntr;

	if (size < 1 || nmemb < 1)
		return (NULL);
	pntr = malloc(nmemb * size);
	if (pntr == NULL)
		return (NULL);
	i = 0;
	while (i != (nmemb * size))
	{
		pntr = '\0';
		i++;
	}
	return (pntr);
}
