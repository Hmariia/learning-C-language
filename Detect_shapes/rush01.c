/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangheli <mangheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 08:40:42 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/13 14:20:38 by mangheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	rush01_1(int x, int col, char *str, int i)
{
	if (col == 1)
		str[i] = '/';
	else if (col == x)
		str[i] = '\\';
	else
		str[i] = '*';
}

void	rush01_2(int x, int col, char *str, int i)
{
	if (col == 1)
		str[i] = '\\';
	else if (col == x)
		str[i] = '/';
	else
		str[i] = '*';
}

void	rush01_3(int x, int col, char *str, int i)
{
	if (col == 1 || col == x)
		str[i] = '*';
	else
		str[i] = ' ';
}

char	*rush01(int x, int y)
{
	int		row;
	int		col;
	char	*str;
	int		i;

	str = malloc((x * y + y + 1) * sizeof(char));
	row = 1;
	i = 0;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (row == 1)
				rush01_1(x, col, str, i);
			else
				row == y ? rush01_2(x, col, str, i) : rush01_3(x, col, str, i);
			col++;
			i++;
		}
		str[i] = '\n';
		row++;
		i++;
	}
	return (str);
}
