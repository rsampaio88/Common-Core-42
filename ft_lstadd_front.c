/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:30:34 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/08 17:19:48 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//adds the node on the end the list

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
	{
		new->next = (void *)0;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// void	ft_print(t_list *lista)
// {
// 	t_list		*ptr;

// 	ptr = lista;
// 	while (ptr != NULL)
// 	{
// 		printf("%s", (char *)ptr->content);
// 		ptr = ptr->next;	
// 	}
// }

// int		main()
// {
// 	char	*var1;
// 	char	*var2;
// 	t_list	*lista;
// 	t_list	*node1;
// 	t_list	*node2;
//
// 	lista = NULL;
// 	var1 = "ola";
// 	var2 = "adeus";
// 	node1 = ft_lstnew((void *)var2);
// 	ft_lstadd_front(&lista, node1);
// 	node2 = ft_lstnew((void *)var1);
// 	ft_lstadd_front(&lista, node2);
// 	ft_print(lista);
// 	return (0);
// }