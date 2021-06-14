/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 18:38:48 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/13 19:59:56 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	if_square(char *str)
{
	int i;
	int n1;
	int n2;

	i = 0;
	n1 = 0;
	n2 = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\n')
		{
			n1++;
			i++;
		}
		if (n2 == 0)
			n2 = n1;
		if (n1 == n2)
			n1 = 0;
		else
			return (0);
		i++;
	}
	if (ft_num(str) == n2)
		return (1);
	return (0);
}
