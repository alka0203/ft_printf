/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:18:20 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/07 19:53:15 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	p_len(int n)
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

// int    ft_putnbrbase(long n, char *base)
// {
//     int len;
//     int i;
    
//     i = 0;
//     i = p_strlen(n);
//     len = strlen(base);
//     if (n == 0)
// 	{
// 		putchar('0');
// 		return (1);
// 	}
//     // if (n < 0)
//     // {
//     //     //base = (char *)ft_putstr("ffffffff");
//     //     n = 4294967296;
//     //     //n = ft_putnbrbase(4294967296, "0123456789abcdef");
//     //     n--;
//     //     //base--;
//     // }
//     if (n < 0)
// 	{
// 		ft_putchar('-');
//         i++;
// 	}
//     if (n < 10)
//     {
//         ft_putchar(base[n]);
//         return (i);
//     }
//     else
//         ft_putnbrbase(n / len, base);
//     ft_putchar(base[n % len]);
//     return (i);
// }

int    ft_putnbrbase(long n, char *base)
{
    int len;
    int i;
    
    i = p_len(n);
    len = strlen(base);
    if (!n)
        return (0);
    if (n == 0)
	{
		putchar('0');
		return (1);
	}
    if (n < 0)
    {
        //base = (char *)ft_putstr("ffffffff");
        n = 4294967296;
        //n = ft_putnbrbase(4294967296, "0123456789abcdef");
        n--;
        //base--;
    }
    if (n < 0)
    {
        ft_putchar('-');
        n *= -1;
    }
    if (n < 10)
    {
        ft_putchar(base[n]);
        return (i);
    }
    else
    {
        ft_putnbrbase(n / len, base);
    }
    ft_putchar(base[n % len]);
    return (i);
}