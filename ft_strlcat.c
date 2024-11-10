/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:02:15 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/08 19:22:12 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//concatenate src on the end of dest with '\0'
//the (lensrc + lendest) is not greater than size

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_src = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0' && len_dest < size)
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dest)
		return (len_src + size);
	while (src[i] != '\0' && (len_dest + i) < (size -1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

/*int	main(void)
{
	const char	*src = "rita";
	char		dest[15] = "ola";
	size_t		size = 15;
	
	printf("%d", ft_strlcat(dest, src, size));
	return (0);
}*/
