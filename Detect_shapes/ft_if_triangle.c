/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_triangle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:48:29 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/13 19:38:25 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_if_triangle(char *str)
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
			n2++;
			i++;
		}
		if (n1 < n2)
		{
			n1 = n2;
			n2 = 0;
		}
		else
			return (0);
		i++;
	}
	return (1);
}