/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:21:52 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/06 18:44:32 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int    ft_putchar(char c)
// {
//     int i;
//     i = 1;
//     write(1, &c, 1);
//     return (i);
// }

int	ft_putnbr(int nb)
{
    int i;

    i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
        i++;
	}
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

// int main()
// {
//     int x = ft_putnbr(1234);
//     printf("\n%d", x);
// }