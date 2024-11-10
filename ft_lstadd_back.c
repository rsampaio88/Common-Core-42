/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:13:10 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/10 17:32:25 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//adds the node on the end of the list

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*ptr;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (new == NULL)
		return ;
	ptr = *lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
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
// 	char	*var;
// 	char	*var1;
// 	t_list	*node;
// 	t_list	*lista;
// 	t_list	*node1;
//
// 	var1 = "adues";
// 	var = "ola";
// 	lista = NULL;
// 	node = ft_lstnew((void *)var);
// 	ft_lstadd_front(&lista, node);
// 	node1 = ft_lstnew((void *)var1);
// 	ft_lstadd_back(&lista, node1);
// 	ft_print(lista);
// 	return (0);
// }
