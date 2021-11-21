/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:00:12 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/19 18:06:06 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*reserv;
 if((reserv = malloc(size * count)) == NULL)
	return (NULL);
 ft_memset(reserv, 0, size * count);
 return (reserv);
}

