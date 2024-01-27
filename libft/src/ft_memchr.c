/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:13:39 by bberthod          #+#    #+#             */
/*   Updated: 2023/05/05 13:05:57 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;

	i = 0;
	while (i < (int)n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
	int			size;
	size_t		n;
	const void	*s;

	s = NULL;
	size = atoi(av[3]);
	n = (size_t)size;
	(void)ac;
	printf("%p\n", ft_memchr(s, atoi(av[2]), n));
	printf("%p\n", memchr(s, atoi(av[2]), n));
	return (0);
}
*/
