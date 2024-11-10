/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:15:37 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/08 14:45:56 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//aplies the function f to each content of the node
void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	t_list	*it;

	it = lst;
	while (it != NULL)
	{
		f(it->content);
		it = it->next;
	}
}
