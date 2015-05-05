/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicher <fbicher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/26 16:05:33 by fbicher           #+#    #+#             */
/*   Updated: 2014/12/30 13:17:30 by fbicher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	size_t		num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = -(size_t)n;
	}
	else
		num = (size_t)n;
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
		ft_putchar_fd('0' + num, fd);
}
