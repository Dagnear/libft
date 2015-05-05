/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 16:07:42 by fbicher           #+#    #+#             */
/*   Updated: 2015/01/13 23:43:35 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			btree_add(t_btree **root, t_btree *new,
	int (*cmpf)(void *, void *))
{
	if (root != NULL && new != NULL && (*cmpf) != NULL)
	{
		if (*root == NULL)
			*root = new;
		else
		{
			if ((*cmpf)(new->item, (*root)->item) < 0)
				btree_add(&((*root)->left), new, (*cmpf));
			else
				btree_add(&((*root)->right), new, (*cmpf));
		}
	}
}
