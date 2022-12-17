/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_alloca.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <arouzen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:43:27 by arouzen           #+#    #+#             */
/*   Updated: 2022/12/03 21:43:42 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_alloca(void *content, void *(*alloc)(size_t))
{
	t_list	*new_list;

	new_list = alloc(sizeof(t_list));
	new_list->next = NULL;
	new_list->content = content;
	return (new_list);
}
