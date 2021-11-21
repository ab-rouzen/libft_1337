/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:44:08 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/21 16:24:40 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tabcount(const char *str, char c)
{
	int	i;
	int	count;
	int	j;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		j = i;
		while (str[i] != c && str[i])
			i++;
		if (j != i)
			count++;
	}
	return (count);
}

void	**freeme(char **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free (tab);
	return (NULL);
}

char	**allo_mem(char **blk, char *str, char c)
{
	char	*loc;
	int		i;
	int		m;

	i = 0;
	m = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		loc = &str[i];
		while (str[i] != c && str[i])
			i++;
		if ((&str[i] - loc) != 0)
		{
			blk[m] = malloc(sizeof(char) * (&str[i] - loc + 1));
			if (!blk[m])
				return (freeme(blk, m));
			m++;
		}
	}
	blk[m] = NULL;
	return (blk);
}

void	feelme(char *str, char c, char **tab)
{
	int		i;
	int		m;
	char	*loc;

	i = 0;
	m = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		loc = &str[i];
		while (str[i] != c && str[i])
			i++;
		if (&str[i] - loc != 0)
			ft_strlcpy(tab[m], loc, &str[i] - loc + 1);
		m++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char **) * tabcount(s, c) + 1);
	if (!tab)
		return (NULL);
	allo_mem(tab, (char *)s, c);
	if (!tab)
		return (NULL);
	feelme((char *)s, c, tab);
	return (tab);
}
/*
int	main()
{
	int	i;
	char **s;
	//char m[]="split  ||this|for|me|||||!|";
	char m[]="      split       this for   me  !  duh ";
//	char m[]="                  olol";
	//char m[]="0 0 0 0 0 0";

	i = 0;
	s = ft_split(m, ' ');
	while(s[i])
	{
		ft_putstr_fd(s[i], 1);
		ft_putstr_fd("\n", 1);
		i++;
	}
	return 0;
}
*/
