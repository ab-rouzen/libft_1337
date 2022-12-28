/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_alloca.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <arouzen@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:42:24 by arouzen           #+#    #+#             */
/*   Updated: 2022/12/29 00:39:41 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_alloca(\
		char const *s1, char const *s2, void*(*alloc)(size_t))
{
	char	*joined;
	int		size_s1;
	int		size_s2;

	if (!s1 && !s2)
		return (NULL);
	size_s1 = ft_strlen((char *)s1);
	size_s2 = ft_strlen((char *)s2);
	joined = alloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	ft_memcpy((char *)joined, s1, size_s1);
	ft_memcpy((char *)&joined[size_s1], s2, size_s2);
	joined[size_s1 + size_s2] = '\0';
	return (joined);
}
