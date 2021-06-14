/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheloaho <jheloaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 19:15:00 by jheloaho          #+#    #+#             */
/*   Updated: 2021/05/30 20:06:26 by jheloaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	printshape(int q, int w, int e, int r);

void	printshape(int q, int w, int e, int r)
{
	if (e == 1)
		if (r == 1)
			ft_putchar('/');
		else if (r == q)
			ft_putchar('\\');
		else
			ft_putchar('*');
	else if (e == w)
		if (r == 1)
			ft_putchar('\\');
		else if (r == q)
			ft_putchar('/');
		else
			ft_putchar('*');
	else
		(r == 1 || r == q) ? ft_putchar('*') : ft_putchar(' ');
}

void	rush(int x, int y)
{
	int row;
	int col;

	row = 1;
	col = 1;
	while (row <= y)
	{
		while (col <= x)
		{
			printshape(x, y, row, col);
			col++;
		}
		col = 1;
		ft_putchar('\n');
		row++;
	}
}
