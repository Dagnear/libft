/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 16:26:03 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/26 16:15:06 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	dp = dst;
	sp = src;
	while (n-- > 0)
		*dp++ = *sp++;
	return (dst);
}
