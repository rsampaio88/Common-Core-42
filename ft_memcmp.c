/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:21:56 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 19:04:45 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compares byte a byte until n bytes

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*st1;
	const unsigned char	*st2;
	size_t				i;

	i = 0;
	st1 = (const unsigned char *)s1;
	st2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < (n - 1) && st1[i] == st2[i])
		i++;
	return (st1[i] - st2[i]);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	r;
	
	(void)argc;
	r = ft_memcmp(argv[1], argv[2], 3);
	printf("%d", r);
	return (0);
}*/
