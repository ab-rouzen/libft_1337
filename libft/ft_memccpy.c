/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:18:58 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/14 14:22:45 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memchrmod(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	chr;
	unsigned char	*us;

	chr = c;
	us = s;
	i = 0;
	while (i < n && us[i] != chr && us[i])
		i++;
	if (us[i] == chr)
		return (i + 1);
	return (i + 1);
}

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*pdst;
	size_t				c_loc;

	pdst = dst;
	c_loc = ft_memchrmod(src, c, n);
	if (c_loc < n)
	{
		ft_memcpy(dst, src, c_loc);
		return (&pdst[c_loc]);
	}
	else ft_memcpy(dst, src, n);
	return (NULL);
}
