/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 08:37:32 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/14 11:02:02 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	chr;

	chr = c;
	i = 0;
	while (s[i] != chr && s[i])
		i++;
	if (s[i] == chr)
		return (&s[i]);
	return (NULL);
}

