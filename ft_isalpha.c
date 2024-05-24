/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdalal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:50:43 by rdalal            #+#    #+#             */
/*   Updated: 2024/05/20 16:50:47 by rdalal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

#include <stdio.h>
int main(void)
{
    char *str = "bkl21";
    if(ft_isalpha(str))
    {
        printf("string has alphabets. \n");
    }
    else
    {
        printf("string contains non-alphabet characters");
    }
    return (0);

}
