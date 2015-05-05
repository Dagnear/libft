/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_del.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 18:52:43 by fbicher           #+#    #+#             */
/*   Updated: 2015/01/14 19:15:43 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			btree_del(t_btree **root, void (*del)(void *))
{
	if (root != NULL && *root != NULL)
	{
		btree_del(&((*root)->left), (*del));
		btree_del(&((*root)->right), (*del));
		if ((*del) != NULL)
			(*del)((*root)->item);
		free(*root);
		*root = NULL;
	}
}
