/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 20:47:12 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/27 21:29:33 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (TRUE);
	else
		return (FALSE);
}

char			*ft_strtrim(char const *s)
{
	char		*start;
	size_t		len;

	if (s == NULL)
		return (NULL);
	start = (char *)s;
	while (ft_is_whitespace(*start) == TRUE)
		start++;
	if (*start == '\0')
		return (ft_strnew(0));
	len = ft_strlen(start);
	while (ft_is_whitespace(start[len - 1]) == TRUE)
		len--;
	return (ft_strsub(start, 0, len));
}
