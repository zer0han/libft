/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:52:56 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/20 16:52:58 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t  i;

    i = 0;
    while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
    {
        if (str1[i] > str2[i])
            return (1);
        if (str1[i] < str2[i])
            return (-1);
        i++;
    }
    return (0);   
}
