/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:19:43 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/21 17:29:42 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_size(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	feelme(char *tab, int n, int i)
{
	if (n < 0)
	{
		tab[i--] = '-';
		n = -n;
	}
	if (n > 9)
	{
		i--;
		feelme(tab, n / 10, i);
	}
	tab[i] = (n % 10) + '0';
}


char	*ft_itoi(int n)
{
	char	*holder;
	int		size;

	size = find_size(n);
	holder = malloc(sizeof(char) * size + 1);
	if (!holder)
		return (NULL);
	feelme(holder, n, size);
	return (holder);
}

int	main(void)
{
	ft_putstr_fd(ft_itoi(427), 1);
	return (0);
}

