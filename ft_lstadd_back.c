/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:35:07 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/26 23:54:50 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*crawler;
	t_list	*prev;

	crawler = *alst;
	while (crawler)
	{
		prev = crawler;
		crawler = crawler->next;
	}
	if (*alst)
		(*prev).next = new;
	else
		*alst = new;
}
