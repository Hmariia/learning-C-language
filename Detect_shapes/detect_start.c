/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:46:33 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/13 19:20:12 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	detect_start(char *str)
{
	int i;
	int n;

	i = 0;
	n = detect_corners(str);
	while (str[n] != '\0')
	{
		if (str[n] == '\n')
			i++;
		n++;
	}
	if (i > 1)
		return (1);
	else
		return (0);
}
