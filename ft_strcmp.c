/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:05:34 by arouzen           #+#    #+#             */
/*   Updated: 2022/11/21 18:13:59 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char	*ns1;
	const unsigned char	*ns2;
	int					i;

	i = 0;
	if (!s1 || !s2)
		return (-1);
	ns1 = (const unsigned char *)s1;
	ns2 = (const unsigned char *)s2;
	while (ns1[i] && ns2[i] && ns1[i] == ns2[i])
		i++;
	return (ns1[i] - ns2[i]);
}
