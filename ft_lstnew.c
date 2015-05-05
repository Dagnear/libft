/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/28 19:05:06 by fbicher           #+#    #+#             */
/*   Updated: 2015/01/05 19:17:11 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = NULL;
	lst->content_size = 0;
	lst->next = NULL;
	if (content != NULL)
	{
		lst->content = ft_memdup(content, content_size);
		if (lst->content != NULL)
			lst->content_size = content_size;
	}
	return (lst);
}
