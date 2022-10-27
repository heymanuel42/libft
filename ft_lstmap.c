/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:56:41 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/27 11:46:30 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*create_and_add_back(t_list **lst, void *content, void (*del)(void*))
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
	{
		ft_lstclear(lst, del);
		return (NULL);
	}
	node->content = content;
	node->next = NULL;
	ft_lstadd_back(lst, node);
	return (node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*new;

	new = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		create_and_add_back(&new, f(lst->content), del);
		lst = lst->next;
	}
	return (new);
}
