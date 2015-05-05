/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/29 18:50:42 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/29 18:53:53 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst != NULL && (*f) != NULL)
	{
		while (lst != NULL)
		{
			(*f)(lst);
			lst = lst->next;
		}
	}
}
