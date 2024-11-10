/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:14:45 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 19:10:39 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//create new string 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*dest;
	size_t		i;
	size_t		slen;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start >= slen)
		return (ft_strdup(""));
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int		main()
// {
// 	char const	*s;
// 	char	*resu;
// 	unsigned int	start;
// 	size_t	len;

// 	s = "abcdefghijk";
// 	start = 2;
// 	len = 2;
// 	resu = ft_substr(s, start, len);
// 	printf("%s", resu);
// 	free(resu);
// 	return (0);
// }
