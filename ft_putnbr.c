/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:21:52 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/09 14:21:32 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len(int n)
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

int	len_min(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	return (11);
}

int	ft_putnbr(int nb)
{
	int		i;

	i = len(nb);
	if (nb == -2147483648)
		return (len_min(nb));
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		if (nb == 0)
			return (1);
		return (i);
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
	return (i);
}
