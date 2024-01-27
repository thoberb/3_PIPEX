/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:44:40 by bberthod          #+#    #+#             */
/*   Updated: 2023/05/05 13:05:57 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	int				adr;

	i = 0;
	adr = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			adr = i;
		i++;
	}
	if ((char)c == s[i])
		adr = i;
	if (adr != -1)
		return ((char *)s + adr);
	return (NULL);
}
