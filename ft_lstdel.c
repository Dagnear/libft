/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/29 17:34:40 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/29 18:36:12 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*elem;
	t_list	*tmp;

	if (alst != NULL && *alst != NULL && (*del) != NULL)
	{
		elem = *alst;
		while (elem != NULL)
		{
			tmp = elem;
			ft_lstdelone(&elem, (*del));
			elem = tmp->next;
		}
		*alst = NULL;
	}
}
