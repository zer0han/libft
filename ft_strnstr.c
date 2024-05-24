/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:53:09 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/20 16:53:10 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strnstr(const char *str, const char *find, size_t len)
{
    size_t  i;
    size_t  j;
    char    *temp;

    temp = (char *)str;
    i = 0;
    if (!find)
        return (temp);
    while (str[i] != '\0' && i < len)
    {
        j = 0;
        while (str[i + j] == find[j])
        {
            if (find[j + 1] == '\0')
                return (&temp[i]);
            j++;
        }
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    const char	str[] = "FIND THIS IN THIS.";
	const char	find[] = "T";

	printf("%s", ft_strnstr(str, find, 6));
	return (0);
}