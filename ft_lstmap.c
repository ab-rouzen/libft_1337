/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 23:27:55 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/27 15:11:20 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static t_list	*aux(t_list *first, t_list *lst,
		void *(*f) (void *), void (*del) (void *))
{
	t_list	*crawler;

	crawler = first;
	while (lst)
	{
		crawler->content = f(lst->content);
		crawler->next = malloc(sizeof(t_list));
		if (!(crawler->next))
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		if (!lst->next)
		{
			free (crawler->next);
			crawler->next = NULL;
		}
		crawler = crawler->next;
		lst = lst->next;
	}
	return (first);
}

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*first;

	if (!lst)
		return (NULL);
	first = malloc(sizeof(t_list));
	if (!first)
		return (NULL);
	return (aux(first, lst, f, del));
}

void	*f(void *content)
{
	return (content);
}

void	del(void *node)
{
	free (node);
}

int	main(void)
{
	t_list	*lst = NULL;

	printf ("%p", ft_lstmap(lst, f, del));
	while (1);
}