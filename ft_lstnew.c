/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:18:45 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/08 15:07:03 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//creates new nodes, receives the content, and returns the node

t_list	*ft_lstnew(void *content)

{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int		main()
// {
// 	char	*var;
// 	t_list	*node;

// 	var = "ola";
// 	node = ft_lstnew((void *)var);
// 	printf("%s", (char *)node->content);
// 	return (0);
// }
