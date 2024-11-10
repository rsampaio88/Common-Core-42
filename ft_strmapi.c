/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:16:44 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 19:07:48 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//create new string by apply function f to string s

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		len;
	char				*dst;
	unsigned int		i;

	len = ft_strlen(s);
	i = 0;
	dst = (char *) malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (i < len)
	{
		dst[i] = f(i, (char)s[i]);
		i++;
	}
	dst[len] = '\0';
	return (dst);
}
/*
char    ft_aux(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ('0');
    else
        return ('1'); 
}

int     main(int argc, char *argv[])
{
    (void)argc;
    printf("Antes : %s\n", argv[1]);
    printf("Depois : %s\n", ft_strmapi(argv[1], ft_aux));
    return (0);
}*/