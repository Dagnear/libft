/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 11:57:55 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/24 12:21:41 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int							ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*c1;
	const unsigned char		*c2;

	c1 = s1;
	c2 = s2;
	while (n-- > 0)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
	}
	return (0);
}
