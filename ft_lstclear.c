/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:16:26 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/08 17:15:41 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//deletes the list and free each node

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	node = *lst;
	while (*lst != NULL)
	{
		node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = node;
	}
}

// void	ft_del(void *content)
// {
// 	free(content);
// }

// void	ft_print(t_list *lista)
// {
// 	t_list		*ptr;

// 	ptr = lista;
// 	if (ptr == NULL)
// 	{
// 		printf("%s\n", "vazio");
// 		return ;
// 	}
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
// 	ft_lstclear(&lista, ft_del);
// 	ft_print(lista);
// 	return (0);
// }
