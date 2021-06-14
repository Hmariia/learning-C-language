/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_shape.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangheli <mangheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 19:19:47 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/13 20:33:25 by mangheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	print_res(char *s, int i, int x, int y)
{
	if (i != 0)
	{
		ft_putstr(" || [");
		ft_putstr(s);
		ft_putstr("] [");
		ft_putchar(x + '0');
		ft_putstr("] [");
		ft_putchar(y + '0');
		ft_putchar(']');
	}
	else
	{
		ft_putstr("[");
		ft_putstr(s);
		ft_putstr("] [");
		ft_putchar(x + '0');
		ft_putstr("] [");
		ft_putchar(y + '0');
		ft_putchar(']');
	}
}

void	detect_shape(char *str, int i, int x, int y)
{
	char *s;

	if (detect_triangle(str) == 1)
	{
		s = "triangle";
		print_res(s, i, x, y);
		i++;
	}
	if (detect_square(str) == 1)
	{
		s = "square";
		print_res(s, i, x, y);
		i++;
	}
	if (detect_reactangle(str) == 1)
	{
		s = "rectangle";
		print_res(s, i, x, y);
		i++;
	}
}
