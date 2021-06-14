/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 15:19:13 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/09 16:24:09 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	if (list)
	{
		while (list)
		{
			if (list->next == NULL)
			{
				return (list.data);
			}
			list = list->next;
		}
	}
	else
		return (NULL);
}
