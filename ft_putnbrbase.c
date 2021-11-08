/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:18:20 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/08 19:51:49 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	find_len(unsigned int n, char *base)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(base);
	while (n)
	{
		i++;
		n /= len;
	}
	return (i);
}

int	ft_putnbrbase(unsigned int n, char *base)
{
	unsigned long long	len;
	int					i;

	i = find_len(n, base);
	len = ft_strlen(base);
	if (i == 0)
	{
		putchar('0');
		return (1);
	}
	if (!n)
		return (1);
	if (n < len)
	{
		ft_putchar(base[n]);
		return (i);
	}
	else
		ft_putnbrbase(n / len, base);
	ft_putchar(base[n % len]);
	return (i);
}
