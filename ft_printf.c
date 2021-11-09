/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:40:18 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/09 14:21:48 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	letter_loop(const char *letter, int return_value, va_list char_check, int i)
{
	if (letter[i + 1] == 'c')
		return_value += ft_putchar(va_arg(char_check, int));
	else if (letter[i + 1] == 's')
		return_value += ft_putstr(va_arg(char_check, char *));
	else if (letter[i + 1] == 'p')
		return_value += ft_putpointer(va_arg(char_check, unsigned long long));
	else if (letter[i + 1] == 'd')
		return_value += ft_putnbr(va_arg(char_check, int));
	else if (letter[i + 1] == 'i')
		return_value += ft_putnbr(va_arg(char_check, int));
	else if (letter[i + 1] == 'u')
		return_value += ft_putunsigned(va_arg(char_check, unsigned int));
	else if (letter[i + 1] == 'x')
		return_value += ft_putnbrbase(va_arg(char_check, int),
				"0123456789abcdef");
	else if (letter[i + 1] == 'X')
		return_value += ft_putnbrbase(va_arg(char_check, int),
				"0123456789ABCDEF");
	else if (letter[i + 1] == '%')
	{
		write(1, "%%", 1);
		return_value += 1;
	}
	return (return_value);
}

int	ft_printf(const char *letter, ...)
{
	va_list	char_check;
	int		i;
	int		j;
	int		return_value;

	i = 0;
	j = 0;
	return_value = 0;
	va_start(char_check, letter);
	while (letter[i])
	{
		if (letter[i] == '%')
		{
			return_value = letter_loop(letter, return_value, char_check, i);
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
	return (return_value + j);
}

int main()
{
	int x = ft_printf("%u\n", 0);
	printf("ft_printf = %d\n", x);
	int y = printf("%u\n", 0);
	printf("printf = %d", y);
	// ft_printf("FT: %u, %u, %u, %u\n", (unsigned int)429896724, 0, 32, (unsigned int)4294967295);
	// printf("PT: %u, %u, %u, %u\n", (unsigned int)429896724, 0, 32, (unsigned int)4294967295);
}
