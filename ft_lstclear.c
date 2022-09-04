/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:06:57 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/27 15:42:35 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*crawler;
	t_list	*prev;

	crawler = *lst;
	while (crawler)
	{
		prev = crawler;
		crawler = (*crawler).next;
		(*del)(prev->content);
		free(prev);
	}
	*lst = NULL;
}
