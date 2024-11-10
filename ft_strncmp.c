/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:14:31 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 19:05:10 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//compares s1 and s2 until n, returns the diference

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int		main()
// {
// 	const char	*s1;
// 	const char	*s2;
// 	size_t		n;

// 	n = 5;
// 	s1 = "printola";
// 	s2 = "print";
// 	printf("%d", ft_strncmp(s1, s2, n));
// 	return (0);
// }
