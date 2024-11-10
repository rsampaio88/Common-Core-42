/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:52:32 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 19:12:45 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies the n bytes from src to dest 

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	if (pdest == psrc || n == 0)
		return (dest);
	if (pdest > psrc)
	{
		while (n > 0)
		{
			n--;
			pdest[n] = psrc[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// int	main()
// {
// 	char	str[] = "abcdefghiu";
// 	// char	str1[] = "hello";
// 	// char	str2[] = "world";

// 	memmove(str + 2, str, ft_strlen(str));
// 	// memmove(str1 + 3, str2 + 1, 2);
// 	printf("%s", str);
// 	return (0);
// }
