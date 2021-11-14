/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 08:10:31 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/14 17:21:32 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const unsigned char *s1, const unsigned char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
			break ;
	}
	if (i == n && n != 0)
		i--;
	if (n != 0)
		return (s1[i] - s2[i]);
	return (0);
}
