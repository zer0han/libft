/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:28:12 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/23 17:28:13 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	num_len(int n)
{
	int	len;

	len = 1;
	if (n < 1)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	unsigned int		nbr;
	char	*result;

	len = num_len(n);
	neg = 0;
	if (n < 0)
		neg = 1;
	if (neg)
		nbr = -n;
	else
		nbr = n;
	result = (char *)malloc(len * sizeof(char));
	if (!result)
		return (NULL);
	result [len - 1] = '\0';
	while (len > 1)
	{
		len--;
		result [len -1] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (neg)
		result[0] = '-';
	return (result);
}

/*#include <stdio.h>

int main() 
{
    int test_cases[] = {123, -123, 0, 2147483647, -2147483648};
    for (int i = 0; i < 5; i++) {
        char *result = ft_itoa(test_cases[i]);
        if (result) {
            printf("ft_itoa(%d) = %s\n", test_cases[i], result);
            free(result);
        } else {
            printf("Memory allocation failed for ft_itoa(%d)\n", test_cases[i]);
        }
    }
    return 0;
}*/