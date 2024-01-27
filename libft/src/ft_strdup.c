/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:48:28 by bberthod          #+#    #+#             */
/*   Updated: 2023/05/05 13:05:57 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		len_s;
	int		i;

	i = 0;
	len_s = ft_strlen(s);
	res = malloc(sizeof(*res) * (len_s + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
/*
int	main(int ac, char **av)
{
	char	*new;
	char	*new2;
	char	*s = NULL;

	(void)ac;
	(void)av;
	new = ft_strdup(av[1]);
	new2 = strdup(s);
	printf("%p\n", new);
	printf("%p\n", new2);
	printf("%s\n", new);
	printf("%s\n", new2);
	return (0);
}
*/
