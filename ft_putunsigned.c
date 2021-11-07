/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:03:39 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/07 19:26:58 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putunsigned(long nb)
{
    int i;

    i = 0;
    while (nb < 0)
    {
        nb = 4294967295;
        nb --;
    }
	// if (nb < 0)
	// {
	// 	ft_putchar('-');
    //     i++;
	// }
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return (i);
	}
	else
    {
		ft_putnbr(nb / 10);
        i++;
    }
	ft_putnbr(nb % 10);
    i++;
    return (i);
}