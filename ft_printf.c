/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:40:18 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/07 20:00:05 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

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
                returnValue += ft_putpointer(va_arg(char_check, int));
            else if (letter[i + 1] == 'd')
                returnValue += ft_putnbr(va_arg(char_check, int));
            else if (letter[i + 1] == 'i')
                returnValue += ft_putnbr(va_arg(char_check, int));
            else if (letter[i + 1] == 'u')
                returnValue += ft_putunsigned(va_arg(char_check, unsigned int));
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
        {
            write(1, &letter[i], 1);
            j++;
        }
        i++;
    }
    va_end(char_check);
    return (returnValue + j);
}

// #include "ft_putchar.c"
// #include "ft_putnbr.c"
// #include "ft_putnbrbase.c"
// #include "ft_putpointer.c"
// #include "ft_putstr.c"
// #include "ft_putunsigned.c"

int main()
{
    int x = ft_printf("%x", 590);
    int y = printf("%x", 590);
    printf("\n%d", x);
    printf("\n%d", y);
}