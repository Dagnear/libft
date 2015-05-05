/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 12:20:03 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/23 22:56:52 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;

	dst = b;
	while (len-- > 0)
		*dst++ = (unsigned char)c;
	return (b);
}
