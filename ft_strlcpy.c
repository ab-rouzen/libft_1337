/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <arouzen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:04:11 by arouzen           #+#    #+#             */
/*   Updated: 2022/12/07 17:04:09 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	while (src[i] && i < dstsize - 1 && dstsize)
	{
		dst[i] = src [i];
		i++;
	}
	if (dstsize)
		dst[i] = '\0';
	return (ft_strlen((char *)src));
}
