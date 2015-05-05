/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putszt_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 18:42:54 by fbicher           #+#    #+#             */
/*   Updated: 2015/01/26 19:01:53 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putszt_fd(size_t n, int fd)
{
	if (n > 9)
	{
		ft_putszt_fd(n / 10, fd);
		ft_putszt_fd(n % 10, fd);
	}
	else
		ft_putchar(n + '0');
}