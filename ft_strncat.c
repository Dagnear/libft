/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 12:56:34 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/24 13:47:07 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ptr;

	ptr = s1;
	if (n != 0)
	{
		while (*ptr != '\0')
			ptr++;
		while ((n-- > 0) && (*s2 != '\0'))
			*ptr++ = *s2++;
		*ptr = '\0';
	}
	return (s1);
}
