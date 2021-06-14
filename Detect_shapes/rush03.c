/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangheli <mangheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 08:52:09 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/13 14:53:33 by mangheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	rush03_1(int n, int x, int index, char *temp)
{
	if (n == 1)
		temp[index] = 'A';
	else if (n == x)
		temp[index] = 'C';
	else if (n != 1 && n != x)
		temp[index] = 'B';
}

void	rush03_2(int n, int x, int index, char *temp)
{
	if (n == 1 || n == x)
		temp[index] = 'B';
	else
		temp[index] = ' ';
}

void	rush03_0(int x, int y, char *temp)
{
	int i;
	int n;
	int index;

	i = 0;
	index = 0;
	while (++i <= y)
	{
		n = 0;
		if (i == 1 || i == y)
			while (++n <= x)
			{
				rush03_1(n, x, index, temp);
				index++;
			}
		else
			while (++n <= x)
			{
				rush03_2(n, x, index, temp);
				index++;
			}
		temp[index] = '\n';
		index++;
	}
}

char	*rush03(int x, int y)
{
	char	*temp;

	temp = malloc((x * y + y + 1) * sizeof(char));
	rush03_0(x, y, temp);
	return (temp);
}
