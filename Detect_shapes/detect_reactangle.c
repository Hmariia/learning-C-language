/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_reactangle.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 18:32:49 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/13 19:03:41 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	detect_reactangle(char *str)
{
	if (if_reactangle(str) == 1)
		return (1);
	else
		return (0);
}
