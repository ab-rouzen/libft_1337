/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 08:10:31 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/26 11:00:40 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ns1;
	const unsigned char	*ns2;

	ns1 = (const unsigned char *)s1;
	ns2 = (const unsigned char *)s2;
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
		return (ns1[i] - ns2[i]);
	return (0);
}
