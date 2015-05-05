/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 17:03:37 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/23 22:52:14 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	dp = dst;
	sp = src;
	while (n-- > 0)
	{
		if ((*dp++ = *sp++) == (unsigned char)c)
			return ((void *)dp);
	}
	return (NULL);
}
