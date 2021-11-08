/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:03:39 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/08 20:02:00 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	u_len(long n)
{
	int		i;

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

int	ft_putunsigned(long nb)
{
	int		i;

	i = u_len(nb);
	if (nb == 0)
	{
		putchar('0');
		return (1);
	}
	while (nb < 0)
	{
		nb = 4294967295;
		nb --;
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
