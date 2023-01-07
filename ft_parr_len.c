/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parr_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <arouzen@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:19:19 by arouzen           #+#    #+#             */
/*   Updated: 2023/01/07 13:53:33 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*returns the size of an array of pointer*/
int	ft_parr_len(void *p)
{
	int	i;

	i = 0;
	if (!p)
		return (0);
	while (p++ != NULL)
		i++;
	return (i);
}

int	ft_chardp_len(char **ppchar)
{
	if (ppchar == NULL)
		return (0);
	return (ft_parr_len(*ppchar));
}
