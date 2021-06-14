/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 20:20:13 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/03 20:20:30 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int i;
	int j;
	int *ar;

	i = min;
	j = 0;
	while (i <= max)
	{
		j++;
		i++;
	}
	ar = (int*)malloc(j * sizeof(int));
	j = 0;
	i = min;
	while (i != max)
	{
		ar[j] = i;
		i++;
		j++;
	}
	ar[j] = '\0';
	(min >= max) ? return (NULL) : return (ar);
}
