/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 20:02:05 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/30 22:02:09 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		sign;
	long	value;
	int		i;

	sign = 1;
	value = 0;
	i = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) != 0 && str[i] != '\0')
	{
		value = (value * 10) + (int)(str[i] - '0');
		if (value < 0)
			return (sign == 1 ? -1 : 0);
		i++;
	}
	return (sign * value);
}
