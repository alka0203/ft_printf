/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:03:39 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/09 14:21:03 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	u_len(unsigned long long n)
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

int	ft_putunsigned(unsigned long long nb)
{
	int		i;

	i = u_len(nb);
	while (nb < 0)
	{
	if (!nb)
		return (1);
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		if (i == 0)
			return (1);
		return (i);
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
	return (i);
}
