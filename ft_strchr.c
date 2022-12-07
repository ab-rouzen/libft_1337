/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <arouzen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 08:37:32 by arouzen           #+#    #+#             */
/*   Updated: 2022/12/07 17:03:32 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*us;
	char	nc;

	i = 0;
	if (s == NULL)
		return (NULL);
	us = (char *)s;
	nc = (char)c;
	while (us[i] != nc && us[i])
		i++;
	if (us[i] == nc)
		return (&us[i]);
	return (NULL);
}
