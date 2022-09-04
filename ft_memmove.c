/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:02:39 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/26 10:23:41 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	int				i;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (!src && !dst)
		return (dst);
	if (!len)
		return (dst);
	if (dst < src)
		ft_memcpy(pdst, psrc, len);
	else
	{	
		i = len;
		while (--i >= 0)
			*(&(*(&pdst[i]))) = psrc[i];
	}
	return (pdst);
}
