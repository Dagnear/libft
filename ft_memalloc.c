/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 18:06:08 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/30 21:52:51 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*mem;

	if (size == 0)
		return (NULL);
	mem = (void *)malloc(size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
