/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 16:37:32 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/24 17:36:22 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char		*last;

	last = NULL;
	while (1)
	{
		if (*s == (char)c)
			last = (char *)s;
		if (*s == '\0')
			return (last);
		s++;
	}
}
