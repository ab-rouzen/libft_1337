/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:04:14 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/13 17:18:34 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	*ft_memset(void *b, int c, size_t len)
{
	int	i;
	char *ptr;

	i = 0;
	ptr =  (unsigned char *) b;
	while (i < len)
	{
		ptr[i] =  (unsigned char) c;
		i++;
	}
	return (ptr);
}
