/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:47:14 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/20 11:10:15 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		size_s1;
	int		size_s2;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen((char *)s1);
	size_s2 = ft_strlen((char *)s2);
	joined = malloc(((size_s1 + size_s2) * sizeof(char)));
	if (!joined)
		return (NULL);
	ft_memcpy((char *)joined, s1, size_s1);
	ft_memcpy((char *)&joined[size_s1], s2, size_s2);
	joined[size_s1 + size_s2] = '\0';
	return (joined);
}
/*
int	main(void)
{
	char *stk="We bound";
	char *next="The law";

	ft_putstr_fd(ft_strjoin(stk, next), 1);
	return (0);
}
*/
