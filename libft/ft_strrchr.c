/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:17:08 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/14 13:12:33 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
const char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	chr;
	const char		*pos;
	
	chr = c;
	i = 0;
	pos = NULL;
	while (s[i])
	{
		if (s[i] == chr)
			pos = &s[i];
		i++;
	}
	if (s[i] == chr && chr == '\0')
		pos = &s[i];
	if (pos != NULL)
		return (pos);
	return (NULL);
}
