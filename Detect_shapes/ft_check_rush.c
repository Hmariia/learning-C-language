/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rush.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:27:02 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/13 20:14:06 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		ft_check_rush_part2(char *str, int x, int y, int i)
{
	if (ft_cmp(str, rush01(x, y)) == 0)
	{
		print_rush01(x, y, i);
		i++;
	}
	if (ft_cmp(str, rush02(x, y)) == 0)
	{
		print_rush02(x, y, i);
		i++;
	}
	if (ft_cmp(str, rush03(x, y)) == 0)
	{
		print_rush03(x, y, i);
		i++;
	}
	if (ft_cmp(str, rush04(x, y)) == 0)
	{
		print_rush04(x, y, i);
		i++;
	}
	return (i);
}

int		ft_check_rush(char *str, int x, int y)
{
	int i;

	i = 0;
	if (ft_cmp(str, rush00(x, y)) == 0)
	{
		print_rush00(x, y);
		i++;
	}
	i = ft_check_rush_part2(str, x, y, i);
	if (i == 0)
	{
		ft_putstr("aucune");
	}
	return (i);
}
