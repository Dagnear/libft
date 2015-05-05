/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/20 17:36:49 by fbicher           #+#    #+#             */
/*   Updated: 2015/01/13 15:47:28 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	t_btree		*new_node;

	new_node = btree_create_node(item);
	if (*root == NULL)
		*root = new_node;
	else
	{
		if ((*cmpf)(item, (*root)->item) < 0)
			btree_insert_data(&((*root)->left), item, cmpf);
		else
			btree_insert_data(&((*root)->right), item, cmpf);
	}
}
