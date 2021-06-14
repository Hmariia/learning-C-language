/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_triangle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 20:26:40 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/13 20:13:08 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	detect_triangle(char *str)
{
	if (detect_corners(str) == 1)
	{
		if (ft_if_reverse(str) == 1 | ft_if_triangle(str) == 1)
			return (1);
	}
	return (0);
}
