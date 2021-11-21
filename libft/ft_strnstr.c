/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:21:05 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/19 15:31:00 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	unsigned char	*found;
	unsigned char	*nhaystack;
	size_t			ndlen;

	i = 0;
	nhaystack = (unsigned char *) haystack;
	ndlen = ft_strlen((char *)needle);
	if (ndlen == 0)
		return ((char *)nhaystack);
	while (nhaystack[i] && i < len)
	{
		found = &nhaystack[i];
		if (ft_strncmp(&nhaystack[i], (unsigned char *)needle, ndlen) == 0
			&& (i + ndlen) <= len)
		{
			return ((char *)found);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = ft_strlen(s2);
	ft_putstr_fd(ft_strnstr(s1, s2, max), 1);
	return (0);
}
*/
