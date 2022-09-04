/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:36:51 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/27 12:55:56 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*new_str;
	char	*ns;

	if (!s)
		return (NULL);
	ns = (char *)s;
	i = 0;
	new_str = malloc(sizeof(char) * ft_strlen(ns) + 1);
	if (!new_str)
		return (NULL);
	while (ns[i])
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
