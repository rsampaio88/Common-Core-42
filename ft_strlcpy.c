/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:14:09 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 19:04:32 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies to size-1 charcaters from the src to the dst
//verifies if src empty and size is 0

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		lensrc;

	i = 0;
	lensrc = (size_t)ft_strlen(src);
	if (size == 0)
		return (lensrc);
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}

// int		main()
// {
// 	char	dst[20];
// 	const char	*src;
// 	size_t		size;

// 	size = 5;
// 	src = "abcdefghiu";
// 	printf("%d", (int)ft_strlcpy(dst, src, size));
// 	return (0);
// }