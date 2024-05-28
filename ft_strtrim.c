/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:16:24 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/22 15:16:26 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_len_set(const char *str, const char *set)
{
	int	i;
	int	count_set;

	i = 0;
	count_set = 0;
	while (str[i] != '\0')
	{
		if (ft_set(str[i], &set[i]))
			count_set++;
		i++;
	}
	return (count_set);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = malloc(sizeof(char) * (ft_strlen(s1)- (ft_len_set(s1, set)) + 1));
	if (!result)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (ft_set(s1[i], &set[i]))
		{
			result[j] = s1[i];
			j++;
		}
		i++;
	}
	result[j] = '\0';
	return (result);
}
