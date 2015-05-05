/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/20 14:55:29 by fbicher           #+#    #+#             */
/*   Updated: 2015/01/13 23:13:20 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			btree_apply_infix(t_btree *root, void (*applyf)(t_btree *))
{
	if (root != NULL && (*applyf) != NULL)
	{
		btree_apply_infix(root->left, (*applyf));
		(*applyf)(root);
		btree_apply_infix(root->right, (*applyf));
	}
}
