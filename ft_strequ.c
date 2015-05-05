/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/27 13:33:50 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/27 15:06:56 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	else if (ft_strcmp(s1, s2) != 0)
		return (0);
	else
		return (1);
}
