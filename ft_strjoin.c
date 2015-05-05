/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 17:55:00 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/27 19:38:25 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	s1_len;
	size_t	s2_len;

	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s = ft_strnew(s1_len + s2_len);
	if (s == NULL)
		return (NULL);
	ft_strcpy(s, s1);
	ft_strcpy((s + s1_len), s2);
	return (s);
}
