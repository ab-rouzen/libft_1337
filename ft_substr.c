/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <arouzen@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:20:52 by arouzen           #+#    #+#             */
/*   Updated: 2023/01/08 12:56:07 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*ns;

	ns = (char *)s;
	if (!ns)
		return (NULL);
	if (start <= (unsigned int)ft_strlen(ns))
	{
		if ((long) len > ft_strlen(ns))
			substr = malloc (ft_strlen(ns) + 1);
		else
			substr = malloc (len + 1);
		if (!substr)
			return (NULL);
		ft_strlcpy(substr, (const char *)&ns[start], len + 1);
		return (substr);
	}
	substr = malloc(1);
	substr[0] = '\0';
	return (substr);
}
