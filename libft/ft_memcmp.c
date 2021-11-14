/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 14:25:53 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/14 16:48:04 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char *us1;
	const unsigned char *us2;

	us1 = s1;
	us2 = s2;
	i = 0;
	while (us1[i] == us2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (us1[i] - us2[i]);
}
