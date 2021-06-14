/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_corners.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:46:37 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/13 19:18:59 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	detect_corners(char *str)
{
	int corner;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		corner = 0;
		while (str[i] != '\n')
		{
			if (str[i] != ' ' | str[i] != '\t')
				corner++;
			i++;
		}
		if (corner == 1)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
