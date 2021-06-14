/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:22:16 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/08 08:45:19 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *ar;
	int	i;

	i = 0;
	ar = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		ar[i] = f(tab[i]);
		i++;
	}
	return (ar);
}
