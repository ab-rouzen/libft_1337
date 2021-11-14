/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arouzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:26:26 by arouzen           #+#    #+#             */
/*   Updated: 2021/11/13 15:58:09 by arouzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
int	main(void)
{
	char str[] = "we1337here"; 
	char *ptr = malloc(sizeof(char) * 4);
	ft_memset(str, 'A', 32);
	ft_putstr_fd(str, 1);
	return (0);
}
