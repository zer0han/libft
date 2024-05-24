/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:54:52 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/24 13:54:54 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write (fd, s, ft_strlen(s));
}

#include <stdio.h>
int	main(void)
{
	char *s = "this is a test";
	char *s2 = "THIS IS ALSO A TEST";
	char *s3 = "EVEN THIS IS A TEST";

	ft_putstr_fd("TEST 1: ", 1);
	printf("%zu\n", ft_strlen(s));
	
	ft_putstr_fd("TEST 2: ", 1);
	printf("%zu\n", ft_strlen(s2));

	ft_putstr_fd("TEST 3: ", 1);
	printf("%zu\n", ft_strlen(s3));
	return (0);
}

