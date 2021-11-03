/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:18:20 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/03 20:27:55 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int    ft_putchar(char c)
{
    return(write(1, &c, 1));
}

void    ft_putnbrbase(int n, char *base)
{
    int len;
    int *pointer;

    pointer = &n;
    len = strlen(base);
    if (pointer)
    {
        ft_putnbrbase(*pointer /  10, base);
        ft_putchar(base[*pointer % len]);
    }
    if (n < 0)
    {
        ft_putchar('-');
        n *= -1;
    }
    if (n < 10)
    {
        ft_putchar(base[n]);
        return ;
    }
    else
    {
        ft_putnbrbase(n / len, base);
        ft_putchar(base[n % len]);
    }
}
