/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 16:18:08 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/22 17:39:10 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	size_t	len;
	char	*res;

	len = ft_strlen(s) + 1;
	res = (char*)malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s, len);
	return (res);
}
