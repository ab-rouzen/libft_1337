/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:51:26 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/20 11:10:59 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	setcheck(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	char	*start;
	char	*end;
	int		len;

	i = 0;
	if (!s1)
		return (NULL);
	while (setcheck(s1[i], set) == 1)
		i++;
	start = (char *)&s1[i];
	i = ft_strlen((char *)s1) - 1;
	while (setcheck(s1[i], set) == 1)
		i--;
	end = (char *)&s1[i];
	len = end - start;
	if (len < 0)
		len = -1;
	new = malloc(len + 2);
	if (!new)
		return (NULL);
	ft_strlcpy(new, start, len + 2);
	return (new);
}
/*
int	main()
{
	//char *s1 = "\n\nHello \t  Please\n Trim me !\n \t\t\n  ";
	///char *s1 = "\n\nM\t\t\n  ";
	//char *s2 = "\t\nM ";
	//ft_putstr_fd(ft_strtrim(s1, s2), 1);
	ft_putstr_fd(ft_strtrim("abcdba", "acb"), 1);
	return (0);
}	
*/
