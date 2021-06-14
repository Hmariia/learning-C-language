/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 20:13:09 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/03 20:19:05 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LEN 	420000

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc(sizeof(*src) * (LEN + 1));
	if (dst == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
