/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/28 20:10:49 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/28 20:51:04 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memdup(const void *src, size_t n)
{
	void	*dst;

	if (n == 0)
		return (NULL);
	dst = (void *)malloc(n);
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, src, n);
	return (dst);
}
