/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrokis <mkrokis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 15:07:22 by mkrokis           #+#    #+#             */
/*   Updated: 2021/06/11 15:08:28 by mkrokis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
	{
		btree_apply_infix(root->left->applyf);
	}
	applyf(root->item);
	if (root->right)
	{
		btree_apply_infix(root->right->applyf);
	}
}
