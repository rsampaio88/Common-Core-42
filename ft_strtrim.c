/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:25:48 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 19:08:37 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//creates a copy if s1 without set

static char	*ft_aloc(int start, int end)
{
	char	*dst;
	int		size;

	size = end - start + 1;
	if (size <= 0)
	{
		dst = (char *) malloc(sizeof(char) * 1);
		if (dst == NULL)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	dst = (char *) malloc(sizeof(char) * (size + 1));
	if (dst == NULL)
		return (NULL);
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int		start;
	int		i;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	while (ft_strchr(set, s1[start]) && start < end)
		start++;
	while (ft_strchr(set, s1[end]) && end >= start)
		end--;
	dst = ft_aloc(start, end);
	if (dst == NULL)
		return (NULL);
	while (i <= (end - start))
	{
		dst[i] = s1[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
#include <stdio.h>

int    main()
{
    char const    *s1;
    char const    *set;
    
    s1 = "5955ola988";
    set = "ola";
    printf("%s", ft_strtrim(s1, set));
    return (0);
}*/

// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	printf("%s", ft_strtrim(argv[1], argv[2]));
// 	return (0);
// }
