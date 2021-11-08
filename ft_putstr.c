/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanthos <asanthos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:33:57 by asanthos          #+#    #+#             */
/*   Updated: 2021/11/08 19:58:54 by asanthos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (str == NULL)
		return (0);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
