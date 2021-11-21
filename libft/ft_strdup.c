/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:09:00 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/19 22:01:29 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*n_str;
	char	*nsrc;

	i = 0;
	nsrc = (char *) src;
	n_str = malloc((ft_strlen(nsrc) + 1) * sizeof(char));
	if (n_str == NULL)
		return (NULL);
	while (nsrc[i])
	{
		n_str[i] = nsrc[i];
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}
