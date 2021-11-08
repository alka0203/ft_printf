/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:06:55 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/08 20:22:09 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *letter, ...);
int		ft_putchar(char c);
int		ft_putnbrbase(unsigned int n, char *base);
int		p_putnbrbase(unsigned long long n, char *base);
int		find_len(unsigned int n, char *base);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putpointer(unsigned long long n);
int		ft_putunsigned(long nb);
int		ft_strlen(char *str);

#endif
