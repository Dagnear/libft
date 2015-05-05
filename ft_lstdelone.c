/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/29 17:24:06 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/29 22:05:59 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*elem;

	if (alst != NULL && *alst != NULL && (*del) != NULL)
	{
		elem = *alst;
		(*del)(elem->content, elem->content_size);
		free(elem);
		*alst = NULL;
	}
}
