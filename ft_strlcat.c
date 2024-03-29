/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <arouzen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:34:16 by arouzen           #+#    #+#             */
/*   Updated: 2022/12/07 17:01:48 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (dst == NULL || src == NULL)
		return (0);
	i = ft_strlen(dst);
	while (src[j] && j + i < dstsize - 1 && dstsize)
	{
		dst[i + j] = src [j];
		j++;
	}
	dst[j + i] = '\0';
	while (src[j])
		j++;
	if (i > dstsize)
		return (j + dstsize);
	return (i + j);
}
