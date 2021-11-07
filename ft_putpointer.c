/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:06:47 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/07 18:08:21 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

// int    ft_putchar(char c)
// {
//     int i;
//     i = 1;
//     write(1, &c, 1);
//     return (i);
// }

// int    ft_putpointer(int n, char *base)
// {
//     int i;
//     int len;
//     int rep;
//     int *pointer;

//     i = 0;
//     len = strlen(base);
//     pointer = &n;
//     rep = *pointer;
//     ft_putchar('0');
//     ft_putchar('x');
//     ft_putnbrbase(*pointer /  10, base);
//     ft_putchar(base[*pointer % len]);
//     // ft_putpointer(rep / len, base);
//     // ft_putchar(base[rep % len]);
// 	// if (n < 0)
// 	// {
// 	// 	ft_putchar('-');
// 	// 	n *= -1;
//     //     i++;
// 	// }
// 	// if (n < 10)
// 	// {
// 	// 	ft_putchar(n + 48);
// 	// 	return (i);
// 	// }
// 	// else
//     // {
// 	// 	ft_putpointer(n / 10);
//     //     i++;
//     // }
// 	// ft_putpointer(n % 10);
//     // i++;
//     return (i);
// }

// int    ft_putstr(char *str)
// {
//   int i;
//   i = 0;
//   if (!str)
//   {
//     write(1, "(null)", 6);
//     return (6);
//   }
//     while (str[i])
//     {
//         write(1, &str[i], 1);
//         i++;
//     }
//     return (i);
//}

// int    ft_putnbrbase(int n, char *base)
// {
//     int len;
//     int i;
    
//     i = 0;
//     //i = strlen((const char *)(n + '0'));
//     len = strlen(base);
//     if (n < 0)
//     {
//         ft_putchar('-');
//         n *= -1;
//     }
//     if (n < 10)
//     {
//         ft_putchar(base[n]);
//         return (i);
//     }
//     else
//     {
//         ft_putnbrbase(n / len, base);
//     }
//     ft_putchar(base[n % len]);
//     return (i);
// }

// int ft_putpointer(char   *n)
// {
//     int i;

//     i = 0;
//     ft_putstr("0x");
//     ft_putnbrbase((int)*n, "0123456789abcdef");
//     return (i);
// }

int ft_putpointer(int n)
{
    int i;

    i = 0;
    ft_putstr("0x");
    ft_putnbrbase(n, "0123456789abcdef");
    return (i);
}

// int main()
// {
//     char *x = "Hello World!";
//     ft_putpointer((unsigned int)x);
//    // int *y = &x;
//     //ft_putpointer(*y, "0123456789abcdefghijklmnopqrstuvwxyz");
//     printf("\n%p", x);
//     //printf("\n%x", (int)x);
// }