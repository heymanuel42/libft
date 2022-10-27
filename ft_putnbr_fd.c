/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:32:48 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/26 13:38:36 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:27:56 by ejanssen          #+#    #+#             */
/*   Updated: 2022/09/08 11:15:15 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_rec(long nb, int fd)
{
	char	c;

	if (nb >= 10)
	{
		ft_putnbr_rec(nb / 10, fd);
		ft_putnbr_rec(nb % 10, fd);
	}
	else
	{
		c = '0' + nb;
		ft_putchar_fd(c, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;

	ln = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_rec(ln * -1, fd);
	}
	else
		ft_putnbr_rec(n, fd);
}
