/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:27:55 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/08 17:17:41 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//converts an integrer to string

static int	ft_findc(long n)
{
	int	c;

	c = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		c = c + 1;
		n = (n - (n % 10)) / 10;
	}
	return (c);
}

static int	ft_sign(int n)
{
	if (n >= 0)
		return (0);
	else
		return (1);
}

static long	ft_abs(long n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}

static long	ft_aux(char *dst, long x)
{
	long	n;

	n = 0;
	n = ft_abs(x);
	dst[0] = '-';
	return (n);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		sign;
	int		c;
	int		num;
	long	x;

	x = n;
	sign = ft_sign(x);
	c = ft_findc(ft_abs(x)) + ft_sign(x);
	dst = (char *) malloc(c + 1);
	if (dst == NULL)
		return (NULL);
	if (x < 0)
		x = ft_aux(dst, x);
	dst[c] = '\0';
	while (c - 1 >= sign)
	{
		num = x % 10;
		x = (x - num) / 10;
		dst[c - 1] = num + '0';
		c--;
	}
	return (dst);
}

// int     main()
// {
//     int     n;

//     n = -282596;
//     printf("%s", ft_itoa(n));
//     return (0);
// }
