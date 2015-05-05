/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 15:19:51 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/27 15:31:11 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	else if (ft_strncmp(s1, s2, n) != 0)
		return (0);
	else
		return (1);
}
