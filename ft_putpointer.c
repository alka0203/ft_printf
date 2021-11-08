/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:06:47 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/08 20:16:21 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_find_len(unsigned long long n, char *base)
{
	int					i;
	unsigned long long	len;

	i = 0;
	len = ft_strlen(base);
	while (n)
	{
		i++;
		n /= len;
	}
	return (i);
}

int	p_putnbrbase(unsigned long long n, char *base)
{
	unsigned int	len;
	int				i;

	i = find_len(n, base);
	len = ft_strlen(base);
	if (!n)
		return (1);
	if (n < len)
	{
		ft_putchar(base[n]);
		return (i);
	}
	else
		p_putnbrbase(n / len, base);
	ft_putchar(base[n % len]);
	return (i);
}

int	ft_putpointer(unsigned long long n)
{
	int		i;

	i = p_find_len(n, "0123456789abcdef");
	ft_putstr("0x");
	if (n == 0)
	{
		ft_putchar('0');
		return (3);
	}
	p_putnbrbase(n, "0123456789abcdef");
	return (i + 2);
}
