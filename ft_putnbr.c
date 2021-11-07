/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:21:52 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/07 19:44:04 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

// int    ft_putchar(char c)
// {
//     int i;
//     i = 1;
//     write(1, &c, 1);
//     return (i);
// }

int	len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
    int i;

    i = 0;
	i = len(nb);
	if (nb == 0)
	{
		putchar('0');
		return (1);
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return (i);
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
    return (i);
}

// int main()
// {
// 	int x = ft_putnbr(0);
// 	printf("%d", x);
// }