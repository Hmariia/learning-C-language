/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:18:37 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/13 20:29:11 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#define BUF_SIZE 30000

void	main2(char *buffer)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	while (buffer[x] != '\n')
		x++;
	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
		{
			y++;
		}
		i++;
	}
	i = ft_check_rush(buffer, x, y);
	i++;
	detect_shape(buffer, i, x, y);
	ft_putchar('\n');
}

int		main(void)
{
	char	buffer[BUF_SIZE];

	read(0, buffer, BUF_SIZE);
	if (buffer[0] == '\0')
	{
		ft_putstr("aucune\n");
		return (0);
	}
	main2(buffer);
}
