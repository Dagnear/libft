/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/24 17:37:52 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/26 12:40:28 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *s1, const char *s2)
{
	char		*ptr;
	size_t		len;

	if (*s2 == '\0')
		return ((char *)s1);
	len = ft_strlen(s2);
	while ((ptr = ft_strchr(s1, *s2)) != NULL)
	{
		if (ft_strncmp(ptr, s2, len) == 0)
			return ((char *)ptr);
		s1++;
	}
	return (NULL);
}
