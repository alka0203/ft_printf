/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:40:18 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/02 18:57:49 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int ft_printf(const char *letter, ...)
{
    va_list char_check, char_copy;
    char    c, printC;
    char    *s, return_list;
    char    *value;
    int     i;

    i = 0;
    va_start(char_check, letter);
    va_copy(char_copy, char_check);
    while (letter[i])
    {
        if (letter[i] == '%')
        {
            if (letter[i++] == 'c')
                ft_putchar(va_arg(char_check, char));
            else if (letter[i++] == 's')
                ft_putstr(va_arg(char_check, char *));
            else if (letter[i++] == 'p')
                ft_puthexnbr(va_arg(char_check, void *));
            else if (letter[i++] == 'd')
                ft_putnbr(va_arg(char_check, int));
            else if (letter[i++] == 'i')
                ft_putnbr(va_arg(char_check, int));
            else if (letter[i++] == 'u')
                ft_putnbr(va_arg(char_check, unsigned int));
            else if (letter[i++] == 'x')
                ft_puthexnbr(va_arg(char_check, int));
            else if (letter[i++] == 'X')
                ft_puthexnbr(va_arg(char_check, int));
            else if (letter[i++] == '%')
                ft_putchar(va_arg(char_check, char));
        }
        else
            ft_putchar(letter[i]);
        i++;
    }
    va_end(char_copy);
}

int main()
{
    printf("%x", 9);
    //ft_printf("%s", "lala");
}