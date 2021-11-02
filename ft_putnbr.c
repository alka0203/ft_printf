/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:57:19 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/02 16:49:27 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n *= -1;
    }
    if (n < 10)
    {
        ft_putchar(n + 48);
        return ;
    }
    else
        ft_putnbr(n / 10);
    ft_putnbr(n % 10);
}