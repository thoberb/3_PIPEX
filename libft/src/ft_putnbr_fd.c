/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:14:42 by bberthod          #+#    #+#             */
/*   Updated: 2023/05/05 13:06:46 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write (fd, "-2147483648", 11);
			return ;
		}
		else
		{
			n *= -1;
			ft_putchar_fd('-', fd);
		}
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	ft_putnbr_fd(atoi(av[1]), 1);
	return (0);
}
*/
