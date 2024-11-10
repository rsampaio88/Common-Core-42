/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:26:36 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/07 13:33:43 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*st;

	i = 0;
	st = (const char *)s;
	while (i < n)
	{
		if (st[i] == (char)c)
			return ((void *)&st[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	size_t	n;
	char	c;
	const void	*s;
	char	*adresso;

	n = 5;
	c = 'p';
	s = "topiiip";
	adresso = ft_memchr(s, c, n);
	printf("%s", adresso);
	return (0);
}*/
