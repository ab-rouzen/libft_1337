/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:02:49 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/20 15:41:36 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char		chr;
	char	*us;

	chr = c;
	us = (char *)s;
	i = 0;
	if (!n)
		return (NULL);
	while (i < n && us[i] != chr)
		i++;
	if (us[i] == chr)
		return (&us[i]);
	return (NULL);
}
