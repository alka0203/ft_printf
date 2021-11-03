/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:40:18 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/03 20:31:37 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int ft_printf(const char *letter, ...)
{
    va_list char_check, char_copy;
    int     i, returnValue;

    i = 0;
    va_start(char_check, letter);
    va_copy(char_copy, char_check);
    while (letter[i])
    {
        if (letter[i] == '%')
        {
            if (letter[i++] == 'c')
                returnValue = ft_putchar(va_arg(char_check, int));
            else if (letter[i++] == 's')
                returnValue = ft_putstr(va_arg(char_check, char *));
            else if (letter[i++] == 'p')
                returnValue = ft_putnbrbase(va_arg(char_check, int), "0123456789abcdef");
            else if (letter[i++] == 'd')
                returnValue = ft_putnbrbase(va_arg(char_check, int), "0123456789");
            else if (letter[i++] == 'i')
                returnValue = ft_putnbrbase(va_arg(char_check, int), "0123456789");
            else if (letter[i++] == 'u')
                returnValue = ft_putnbrbase(va_arg(char_check, unsigned int), "0123456789");
            else if (letter[i++] == 'x')
                returnValue = ft_putnbrbase(va_arg(char_check, int), "0123456789abcdef");
            else if (letter[i++] == 'X')
                returnValue = ft_putnbrbase(va_arg(char_check, int), "0123456789ABCDEF");
            else if (letter[i++] == '%')
                returnValue = ft_putchar(va_arg(char_check, char));
        }
        else
            return (ft_putchar(letter[i]));
        i++;
        return (returnValue);
    }
    va_end(char_copy);
}

int main()
{
    int x;

    x = 2;
    printf("%p", &x);
    //ft_printf("%s", "lala");
}