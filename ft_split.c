/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:31:00 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/22 17:31:01 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_word_count(const char *str, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

static char	*ft_strndup(char const *s, int n)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(n + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	free_split(char **split)
{
	char	**temp;

	temp = split;
	while (*temp)
	{
		free(*temp);
		temp++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		start;
	int		word_index;

	i = 0;
	word_index = 0;
	if (!s)
		return (NULL);
	result = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[word_index] = ft_strndup(s + start, i - start);
			if (!result[word_index])
			{
				free_split(result);
				return (NULL);
			}
			word_index++;
		}
		else
			i++;
	}
	result[word_index] = NULL;
	return (result);
}

#include <stdio.h>

int main() {
    char **result;
    int i;

    // Test case 1
    char str1[] = "Hello, world, this is, a test";
    char delimiter1 = ',';
    printf("Test case 1:\nInput: \"%s\" Delimiter: '%c'\n", str1, delimiter1);
    result = ft_split(str1, delimiter1);
    if (result) {
        i = 0;
        while (result[i]) {
            printf("Result[%d]: \"%s\"\n", i, result[i]);
            i++;
        }
        free_split(result);
    } else {
        printf("Memory allocation failed\n");
    }

    // Test case 2
    char str2[] = "Another test case with spaces";
    char delimiter2 = ' ';
    printf("\nTest case 2:\nInput: \"%s\" Delimiter: '%c'\n", str2, delimiter2);
    result = ft_split(str2, delimiter2);
    if (result) {
        i = 0;
        while (result[i]) {
            printf("Result[%d]: \"%s\"\n", i, result[i]);
            i++;
        }
        free_split(result);
    } else {
        printf("Memory allocation failed\n");
    }

    // Test case 3
    char str3[] = "One-more-test-case";
    char delimiter3 = '-';
    printf("\nTest case 3:\nInput: \"%s\" Delimiter: '%c'\n", str3, delimiter3);
    result = ft_split(str3, delimiter3);
    if (result) {
        i = 0;
        while (result[i]) {
            printf("Result[%d]: \"%s\"\n", i, result[i]);
            i++;
        }
        free_split(result);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}