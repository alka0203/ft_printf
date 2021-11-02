/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:06:55 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/02 18:27:32 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>

int     ft_printf(const char *letter, ...);
void    ft_putchar(char c);
void     ft_putnbr(int n);
void    ft_putstr(char *str);

#endif