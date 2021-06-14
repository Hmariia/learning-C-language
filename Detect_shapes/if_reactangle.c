/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_reactangle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 18:28:58 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/13 19:57:17 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	if_reactangle(char *str)
{
	int i;
	int j;
	int ar[4];

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		ar[j] = 0;
		while (str[i] != '\n')
		{
			ar[j] += 1;
			i++;
		}
		j++;
		i++;
	}
	if (ar[0] == ar[2] & ar[1] == ar[3])
		return (1);
	else
		return (0);
}
