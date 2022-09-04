/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:02:49 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/27 15:41:48 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	chr;
	unsigned char	*us;

	chr = (unsigned char)c;
	us = (unsigned char *)s;
	i = 0;
	if (!n)
		return (NULL);
	while (us[i] != chr && i < n - 1)
		i++;
	if (us[i] == chr)
		return (&us[i]);
	return (NULL);
}
