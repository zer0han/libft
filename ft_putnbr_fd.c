/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 14:33:37 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/24 14:33:38 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n , int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{	
		ft_putchar ('-', fd);
		nbr = -nbr;
	}
	if (n > 9)
	{
		ft_putnbr_fd((nbr / 10), fd);
		ft_putnbr_fd((nbr % 10), fd);
	}
	else
		ft_putchar(nbr + '0', fd);
}

#include <stdio.h>
int	main(void)
{
	int n = "1234567890";

	ft_putnbr_fd("TEST: ", 1);
	printf("%d\n", ft_putnbr_fd);
	return (0);
}
