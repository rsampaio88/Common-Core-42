/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:46:10 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/06 22:27:15 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	i;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = num * (-1);
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	i = (num % 10) + '0';
	write(fd, &i, 1);
}

// int		main()
// {
// 	int		i = 987;
// 	int		fd = 1;

// 	ft_putnbr_fd(i, fd);
// 	return (0);
// }
