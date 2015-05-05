/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/29 19:40:09 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/29 21:06:03 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new_lst;
	t_list	*ptr;

	if (lst == NULL || (*f) == NULL)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		tmp = (*f)(lst);
		if (new_lst == NULL)
		{
			new_lst = ft_lstnew(tmp->content, tmp->content_size);
			ptr = new_lst;
		}
		else
		{
			ptr->next = ft_lstnew(tmp->content, tmp->content_size);
			ptr = ptr->next;
		}
		if (ptr == NULL)
			break ;
		lst = lst->next;
	}
	return (new_lst);
}
