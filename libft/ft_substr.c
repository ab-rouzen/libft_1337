/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:20:52 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/20 16:22:45 by arouzen          ###   ########.fr       */
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
	if (start <= ft_strlen(ns))
	{
		if (len > ft_strlen(ns))
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
