/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangheli <mangheli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 08:49:49 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/13 14:30:26 by mangheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	rush02_1(int x, int i, char *str, int n)
{
	if (i == 1 || i == x)
		str[n] = 'A';
	else
		str[n] = 'B';
}

void	rush02_2(int x, int i, char *str, int n)
{
	if (i == 1 || i == x)
		str[n] = 'C';
	else
		str[n] = 'B';
}

void	rush02_3(int x, int i, char *str, int n)
{
	if (i == 1 || i == x)
		str[n] = 'B';
	else
		str[n] = ' ';
}

char	*rush02(int x, int y)
{
	int		j;
	int		i;
	char	*str;
	int		n;

	j = 1;
	n = 0;
	str = malloc((x * y + y + 1) * sizeof(char));
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (j == 1)
				rush02_1(x, i, str, n);
			else
				j == y ? rush02_2(x, i, str, n) : rush02_3(x, i, str, n);
			i++;
			n++;
		}
		str[n] = '\n';
		j++;
		n++;
	}
	return (str);
}
