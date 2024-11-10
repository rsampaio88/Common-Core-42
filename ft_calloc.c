/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:50:35 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/07 13:33:09 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *) malloc(nmemb * size);
	if (dst == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
/*
int	main()
{

}*/
