/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:06:55 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/06 19:31:59 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>

int     ft_printf(const char *letter, ...);
int     ft_putchar(char c);
int     ft_putnbrbase(int n, char *base);
int     ft_putstr(char *str);
int     ft_putpointer(int n, char *base);
int     ft_putnbr(int nb);

#endif