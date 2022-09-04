/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:17:08 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/27 13:54:58 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	chr;
	char	*pos;
	char	*ns;

	ns = (char *)s;
	chr = (char)c;
	i = 0;
	pos = NULL;
	while (ns[i])
	{
		if (ns[i] == chr)
			pos = &ns[i];
		i++;
	}
	if (ns[i] == chr && chr == '\0')
		pos = &ns[i];
	if (pos != NULL)
		return (pos);
	return (NULL);
}
