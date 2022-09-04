/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:04:05 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/27 17:07:11 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	scrap(char *str)
{
	int	i;
	int	minus;

	minus = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	return (i * minus);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	holder;
	int		sign;

	holder = 0;
	i = scrap((char *)str);
	sign = 1;
	if (i < 0)
	{
		sign = -1;
		i *= -1;
	}
	while (str[i] >= 48 && str[i] <= 57)
		holder = holder * 10 + (str[i++] - 48);
	if (sign == -1)
		return (-holder);
	return (holder);
}
