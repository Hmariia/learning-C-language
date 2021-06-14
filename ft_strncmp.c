/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:47:22 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/01 19:30:04 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t n1;
	size_t n2;
	size_t i;

	n1 = 0;
	n2 = 0;
	i = 0;
	while (i <= n)
	{
		n1 += s1[i];
		n2 += s2[i];
		i++;
	}
	if (n1 < n2)
	{
		return (-1);
	}
	if (n1 > n2)
	{
		return (1);
	}
	if (n1 == n2)
	{
		return (0);
	}
}
