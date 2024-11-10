/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:44:18 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 19:14:05 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*pdest;
	const char	*psrc;

	if (!dest && !src)
		return (NULL);
	i = 0;
	pdest = (char *)dest;
	psrc = (const char *)src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

// int	main()
// {
// 	char	dest[10];
// 	char	*src = "ola";

// 	ft_memcpy(dest, src, 10);
// 	printf("%s",dest);
// 	return (0);
// }
