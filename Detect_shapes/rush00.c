/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangheli <mangheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 08:36:53 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/13 14:05:46 by mangheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	rush00_1(int i, int x, int index, char *str)
{
	if (i == 1 || i == x)
		str[index] = 'o';
	else
		str[index] = '-';
}

void	rush00_2(int i, int x, int index, char *str)
{
	if (i == 1 || i == x)
		str[index] = '|';
	else
		str[index] = ' ';
}

char	*rush00(int x, int y)
{
	int		j;
	int		i;
	char	*str;
	int		index;

	j = 1;
	index = 0;
	str = malloc(x * y * sizeof(char) + 1);
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (j == 1 || j == y)
				rush00_1(i, x, index, str);
			else
				rush00_2(i, x, index, str);
			i++;
			index++;
		}
		str[index] = '\n';
		j++;
		index++;
	}
	return (str);
}
