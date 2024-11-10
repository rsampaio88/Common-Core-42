/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:40:37 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 19:09:00 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//looks for c in s, if c is '\0' returns the end of s

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (const char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>

// int	main()
// {
// 	char	c;
// 	const char	*s;
// 	char	*adr;

// 	c = '\0';
// 	s = "oslo";
// 	adr = ft_strchr(s, c);
// 	printf("%s", adr);
// 	return (0);
// }
