/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:59:24 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/02 19:00:14 by asanthos         ###   ########.fr       */
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
        ft_putnbr(n / 16);
    ft_putnbr(n % 16);
}