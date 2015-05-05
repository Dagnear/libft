/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/20 15:20:07 by fbicher           #+#    #+#             */
/*   Updated: 2015/01/13 23:08:50 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			btree_apply_suffix(t_btree *root, void (*applyf)(t_btree *))
{
	if (root != NULL && (*applyf) != NULL)
	{
		btree_apply_suffix(root->left, (*applyf));
		btree_apply_suffix(root->right, (*applyf));
		(*applyf)(root);
	}
}
