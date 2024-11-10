/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:00:04 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 19:03:59 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	dst = (char *) malloc(len1 + len2 + 1);
	if (dst == NULL)
		return (NULL);
	while (i < len1)
	{
		dst[i] = s1[i];
		i++;
	}
	i = 0;
	while ((len1 + i) < (len1 + len2))
	{
		dst[len1 + i] = s2[i];
		i++;
	}
	dst[len1 + i] = '\0';
	return (dst);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", ft_strjoin(argv[1], argv[2]));
	return (0);
}*/
