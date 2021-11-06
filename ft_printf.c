/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:40:18 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/06 19:22:00 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

// int	ft_strlen(char *str)
// {
// 	int		i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// int ft_printf(const char *letter, ...)
// {
//     va_list char_check, char_copy;
//     int     i, returnValue;

//     i = 0;
//     va_start(char_check, letter);
//     va_copy(char_copy, char_check);
//     while (letter[i])
//     {
//         if (letter[i] == '%')
//         {
//             if (letter[i++] == 'c')
//                 returnValue = ft_strlen(ft_putchar(va_arg(char_check, int)));
//             else if (letter[i++] == 's')
//                 returnValue = ft_strlen(ft_putstr(va_arg(char_check, int)));
//             else if (letter[i++] == 'p')
//                 returnValue = ft_strlen(ft_putnbrbase(va_arg(char_check, int), "0123456789abcdef"));
//             else if (letter[i++] == 'd')
//                 returnValue = ft_strlen(ft_putnbrbase(va_arg(char_check, int), "0123456789"));
//             else if (letter[i++] == 'i')
//                 returnValue = ft_strlen(ft_putnbrbase(va_arg(char_check, int), "0123456789"));
//             else if (letter[i++] == 'u')
//                 returnValue = ft_strlen(ft_putnbrbase(va_arg(char_check, unsigned int), "0123456789"));
//             else if (letter[i++] == 'x')
//                 returnValue = ft_strlen(ft_putnbrbase(va_arg(char_check, int), "0123456789abcdef"));
//             else if (letter[i++] == 'X')
//                 returnValue = ft_strlen(ft_putnbrbase(va_arg(char_check, int), "0123456789ABCDEF"));
//             else if (letter[i++] == '%')
//                 returnValue = ft_strlen(ft_putchar(va_arg(char_check, int)));
//         }
//         i++;
//     }
//     va_end(char_copy);
//     return (returnValue + i);
// }

int ft_printf(const char *letter, ...)
{
    va_list char_check;
    int     i;
    int     j;
    int  returnValue;
    i = 0;
    j = 0;
    returnValue = 0;
    va_start(char_check, letter);
    while (letter[i])
    {
        if (letter[i] == '%')
        {
            if (letter[i + 1] == 'c')
                returnValue += ft_putchar(va_arg(char_check, int));
            else if (letter[i + 1] == 's')
                returnValue += ft_putstr(va_arg(char_check, char *));
            else if (letter[i + 1] == 'p')
                returnValue += ft_putnbrbase(va_arg(char_check, int), "0123456789abcdefghijklmnopqrstuvwxyz");
            else if (letter[i + 1] == 'd')
                returnValue += ft_putnbr(va_arg(char_check, int));
            else if (letter[i + 1] == 'i')
                returnValue += ft_putnbr(va_arg(char_check, int));
            else if (letter[i + 1] == 'u')
                returnValue += ft_putnbrbase(va_arg(char_check, unsigned int), "0123456789");
            else if (letter[i + 1] == 'x')
                returnValue += ft_putnbrbase(va_arg(char_check, int), "0123456789abcdef");
            else if (letter[i + 1] == 'X')
                returnValue += ft_putnbrbase(va_arg(char_check, int), "0123456789ABCDEF");
            else if (letter[i + 1] == '%')
            {
                write(1, "%%", 1);
                returnValue += 1;
            }
            i++;
        }
        else
            write(1, &letter[i], 1);
        i++;
    }
    va_end(char_check);
    return (returnValue + i);
}

int main()
{
    int x = ft_printf("boop%%lala\n");
    printf("%d", x);
}