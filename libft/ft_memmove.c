/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:02:39 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/14 10:39:14 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*pdst;
	const unsigned char	*psrc;
	unsigned char		*buff;

	i = 0;
	pdst = dst;
	psrc = src;
	if (dst == NULL && src == NULL)
		return (dst);
	buff = malloc(len);
	ft_memcpy(buff, psrc, len);
	ft_memcpy(pdst, buff, len);
/*	
 *	while (i < len)
	{		
		buff[i] = psrc[i];
		i++;
	}	
*/
	free(buff);	
	return (dst);
}
