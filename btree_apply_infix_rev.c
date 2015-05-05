/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix_rev.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 23:14:06 by fbicher           #+#    #+#             */
/*   Updated: 2015/01/13 23:18:49 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			btree_apply_infix_rev(t_btree *root, void (*applyf)(t_btree *))
{
	if (root != NULL && (*applyf) != NULL)
	{
		btree_apply_infix_rev(root->right, (*applyf));
		(*applyf)(root);
		btree_apply_infix_rev(root->left, (*applyf));
	}
}
