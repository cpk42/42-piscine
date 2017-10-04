/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <ckrommen@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:45:44 by ckrommen          #+#    #+#             */
/*   Updated: 2017/07/14 14:57:50 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_apply_infix(t_btree *root, void (*applyf)(void*))
{
	if (root != NULL)
	{
		if (root->left)
			btree_apply_infix(root->left, applyf);
		(*applyf)(root);
		if (root->right)
			btree_apply_infix(root->right, applyf);
	}
}
