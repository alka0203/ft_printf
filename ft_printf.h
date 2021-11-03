/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:06:55 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/03 20:26:15 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>

int     ft_printf(const char *letter, ...);
int    ft_putchar(char c);
void    ft_putnbrbase(int n, char *base);
void    ft_putstr(char *str);
void    ft_putpointer(int *n);
// va_list char_check, char_copy;
// va_start(char_check, letter);
// va_copy(char_copy, char_check);
// va_end(char_copy);

#endif