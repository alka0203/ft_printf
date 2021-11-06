/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:06:47 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/06 19:40:22 by asanthos         ###   ########.fr       */
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

int    ft_putpointer(int n, char *base)
{
    int i;
    int len;
    int rep;
    int *pointer;

    i = 0;
    len = strlen(base);
    pointer = &n;
    rep = *pointer;
    // ft_putchar('0');
    // ft_putchar('x');
    ft_putnbrbase(*pointer /  10, base);
    ft_putchar(base[*pointer % len]);
    // ft_putpointer(rep / len, base);
    // ft_putchar(base[rep % len]);
	// if (n < 0)
	// {
	// 	ft_putchar('-');
	// 	n *= -1;
    //     i++;
	// }
	// if (n < 10)
	// {
	// 	ft_putchar(n + 48);
	// 	return (i);
	// }
	// else
    // {
	// 	ft_putpointer(n / 10);
    //     i++;
    // }
	// ft_putpointer(n % 10);
    // i++;
    return (i);
}

// // int main()
// {
//     int  x = 590;
//     int *y = &x;
//     ft_putpointer(*y, "0123456789abcdefghijklmnopqrstuvwxyz");
//     //printf("%p", &y);
//     //printf("%p", y);
// }