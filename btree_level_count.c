/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/21 17:46:53 by fbicher           #+#    #+#             */
/*   Updated: 2015/01/23 23:21:24 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				btree_level_count(t_btree *root)
{
	if (root == NULL)
		return (0);
	else
		return (ft_max(btree_level_count(root->left),
		btree_level_count(root->right)) + 1);
}
