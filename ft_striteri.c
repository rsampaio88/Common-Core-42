/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:25:54 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 19:09:34 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//apply f to the character in s

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void   ft_aux(unsigned int i, char *c)
// {
//     if (i % 2 == 0)
//         *c = '0';
//     else
//         *c = '1'; 
// }

// int     main(int argc, char *argv[])
// {
//     (void)argc;
//     printf("Antes : %s\n", argv[1]);
// 	ft_striteri(argv[1], ft_aux);
//     printf("Depois : %s\n", argv[1]);
//     return (0);
// }