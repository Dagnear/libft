/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/20 13:20:15 by fbicher           #+#    #+#             */
/*   Updated: 2015/01/13 23:13:04 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			btree_apply_prefix(t_btree *root, void (*applyf)(t_btree *))
{
	if (root != NULL && (*applyf) != NULL)
	{
		(*applyf)(root);
		btree_apply_prefix(root->left, (*applyf));
		btree_apply_prefix(root->right, (*applyf));
	}
}
