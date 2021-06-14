/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 20:34:01 by jheloaho          #+#    #+#             */
/*   Updated: 2021/05/30 20:37:16 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

void	rush(int x, int y)
{
	int j;
	int i;

	j = 1;
	i = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			if (j == 1 || j == y)
			{
				(j == 1 & i == 1) && write(1, "A", 1);
				(j == y & i == x & x != 1 & y != 1) && write(1, "A", 1);
				(j == 1 & i == x & x != 1) && write(1, "C", 1);
				(j == y & i == 1 & y != 1) && write(1, "C", 1);
				(i > 1 & i < x) && write(1, "B", 1);
			}
			else
				(i > 1 & i < x) ? ft_putchar(' ') : ft_putchar('B');
			i++;
		}
		i = 1;
		ft_putchar('\n');
		j++;
	}
}
