/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:53:57 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/21 17:54:00 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	int	tot_len;
	char	*result;

	tot_len = ft_strlen(s1) + ft_strlen(s2);
	if (tot_len < 1)
		return (NULL);
	
	result = (char *)malloc(tot_len + 1);
	if (!result)
		return (NULL);
	
	if (result)
	{
		ft_strcpy(result, (char *)s1);
		ft_strcat(result, (char *)s2);
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	char const	*s1 = "this is ";
	char const	*s2 = "a test";
	char 	*result = ft_strjoin(s1, s2);

	if (result)
		printf("WORkS!!! SAD: %s\n", result);
	else
		printf("OK THIS WORK.\n");
	free (result);
	return (0);
}