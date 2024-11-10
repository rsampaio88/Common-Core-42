/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:34:28 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 14:39:43 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//search in big for the first occurance of little only until len
//if litle '\0' return big
//if not found return NULL

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)&big[i]);
	while (i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char	*ptr;

	ptr = ft_strnstr(largestring, smallstring, 8);
	printf("%s", ptr);
	return (0);
}*/
