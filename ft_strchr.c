/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:52:06 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/20 16:52:08 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char     *strchr(char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    if (str[i] == c)
        return (&str[i]);
    return (0);
}
