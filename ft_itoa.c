/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/28 11:55:18 by fbicher           #+#    #+#             */
/*   Updated: 2015/01/23 23:23:12 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_convert(char *s, int n, size_t s_len)
{
	size_t		border;

	border = 0;
	if (n < 0)
	{
		border = 1;
		s[0] = '-';
	}
	while (s_len > border)
	{
		if (n < 0)
			s[s_len - 1] = '0' - n % 10;
		else
			s[s_len - 1] = '0' + n % 10;
		n /= 10;
		s_len--;
	}
}

char			*ft_itoa(int n)
{
	char		*s;
	size_t		s_len;

	s_len = ft_dignum(n);
	if (n < 0)
		s_len++;
	s = ft_strnew(s_len);
	if (s == NULL)
		return (NULL);
	ft_convert(s, n, s_len);
	return (s);
}
