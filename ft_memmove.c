/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 18:03:19 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/23 22:55:53 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void					*ft_memcpyrev(void *dst, const void *src, size_t n)
{
	unsigned char			*dp;
	const unsigned char		*sp;

	dp = dst;
	sp = src;
	while (n > 0)
	{
		*(dp + n - 1) = *(sp + n - 1);
		n--;
	}
	return (dst);
}

void						*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int			diff;

	diff = dst - src;
	if (dst == src || len == 0)
		return (dst);
	if (diff < len)
		ft_memcpyrev(dst, src, len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
