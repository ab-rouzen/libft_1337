/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:21:05 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/27 15:30:02 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*found;
	char	*nhaystack;
	size_t	ndlen;

	i = 0;
	nhaystack = (char *)haystack;
	ndlen = ft_strlen((char *)needle);
	if (ndlen == 0)
		return ((char *)nhaystack);
	while (nhaystack[i] && i < len)
	{
		found = &nhaystack[i];
		if (ft_strncmp(&nhaystack[i], needle, ndlen) == 0
			&& (i + ndlen) <= len)
		{
			return ((char *)found);
		}
		i++;
	}
	return (NULL);
}
