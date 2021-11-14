/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:32:47 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/14 09:06:20 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define INT_MIN -2147483648
void	ft_putnbr_fd(int nb, int fd)
{

//	long int nb;

//	nb = n;
	if (nb == INT_MIN)
	{
		ft_putstr_fd("-214", fd);
		nb = 7483648;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}	
	if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
	}
	ft_putchar_fd((nb % 10) + '0', fd);
}
