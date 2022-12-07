/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <arouzen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:56:06 by arouzen           #+#    #+#             */
/*   Updated: 2022/12/07 17:00:52 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstremove(t_list **lst, t_list *node)
{
	while (*lst != node)
		lst = &(*lst)->next;
	*lst = (*lst)->next;
	return (*lst);
}
