/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:41:51 by bberthod          #+#    #+#             */
/*   Updated: 2023/05/05 13:05:57 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(int ac, char **av)
{
	void	*s = av[1];
	void	*s2 = av[1];
	int		c = 'p';
	size_t	n = 4;

	(void)ac;
	ft_memset(s, c, n);
	memset(s2, c, n);
	printf("%s\n", (char *)s);
	printf("%s\n", (char *)s2);
	return (0);
}
*/
