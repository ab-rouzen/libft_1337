/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:19:43 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/26 12:33:55 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_size(int n)
{
	int	i;

	i = 0;
	if (n == INT_MIN)
		return (10);
	if (n < 0)
		n *= -1;
	if (n == 0)
		return (2);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	fillme(char *tab, int n, int i)
{
	if (n == INT_MIN)
	{
		tab[0] = '-';
		tab[1] = '2';
		n = 147483648;
		i += 1;
	}
	if (n < 0 && i != INT_MIN)
	{
		tab[0] = '-';
		n *= -1;
		i++;
	}
	i--;
	if (n > 9)
	{
		fillme(tab, n / 10, i);
	}
	tab[i] = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	char	*holder;
	int		size;

	if (n > 0)
		size = find_size(n) + 1;
	if (n == 0)
	{
		holder = malloc(sizeof(char) * 2);
		if (!holder)
			return (NULL);
		holder[0] = '0';
		holder[1] = '\0';
		return (holder);
	}
	if (n < 0)
		size = find_size(n) + 2;
	holder = malloc(sizeof(char) * size);
	if (!holder)
		return (NULL);
	holder[size - 1] = '\0';
	if (n < 0)
		fillme(holder, n, size - 2);
	else
		fillme(holder, n, size - 1);
	return (holder);
}
