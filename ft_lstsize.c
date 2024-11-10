/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsampaio <rsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:15:27 by rsampaio          #+#    #+#             */
/*   Updated: 2024/11/08 17:16:13 by rsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns the size of the list

int	ft_lstsize(t_list *lst)
{
	int		c;
	t_list	*ptr;

	c = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		c++;
		ptr = ptr->next;
	}
	return (c);
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
//
// int	main(void)
// {
// 	char	*var1;
// 	char	*var2;
// 	char	*var3;
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*lista;
// 	int		fim;
//
// 	lista = NULL;
// 	var1 = "ola";
// 	var2 = "adeus";
// 	var3 = "obrigada";
// 	node1 = ft_lstnew((void *)var1);
// 	node2 = ft_lstnew((void *)var2);
// 	node3 = ft_lstnew((void *)var3);
// 	ft_lstadd_front(&lista, node1);
// 	ft_lstadd_front(&lista, node2);
// 	ft_lstadd_front(&lista, node3);
// 	fim = ft_lstsize(lista);
// 	printf("%d", fim);
// 	ft_print(lista);
// 	return(0);
// }
