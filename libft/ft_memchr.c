/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:02:49 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/14 13:00:38 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	unsigned char		chr;
	const unsigned char	*us;

	chr = c;
	us = s;
	i = 0;
	while (i < n - 1 && us[i] != chr)
		i++;
	if (us[i] == chr)
		return (&us[i]);
	return (NULL);
}
