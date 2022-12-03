/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_alloca.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <arouzen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:41:10 by arouzen           #+#    #+#             */
/*   Updated: 2022/12/03 21:41:50 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_alloca(const char *src, void *(alloc)(size_t))
{
	int		i;
	char	*n_str;
	char	*nsrc;

	i = 0;
	nsrc = (char *)src;
	if (src == NULL)
		return (NULL);
	n_str = alloc((ft_strlen(nsrc) + 1) * sizeof(char));
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
