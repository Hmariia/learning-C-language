/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_rush03.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangheli <mangheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 09:24:40 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/13 13:53:56 by mangheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	print_rush03(int x, int y, int i)
{
	if (i != 0)
	{
		ft_putstr(" || [rush-03] [");
		ft_putchar(x + '0');
		ft_putstr("] [");
		ft_putchar(y + '0');
		ft_putchar(']');
	}
	else
	{
		ft_putstr("[rush-03] [");
		ft_putchar(x + '0');
		ft_putstr("] [");
		ft_putchar(y + '0');
		ft_putchar(']');
	}
}
