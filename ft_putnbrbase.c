/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:18:20 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/06 19:37:11 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int    ft_putchar(char c)
{
    int i;
    i = 1;
    write(1, &c, 1);
    return (i);
}

int    ft_putnbrbase(int n, char *base)
{
    int len;
    int i;
    
    i = strlen((char *)n);
    len = strlen(base);
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

int main()
{
    int x = ft_putnbrbase(1234, "0123456789");
    printf("\n%d", x);
}
