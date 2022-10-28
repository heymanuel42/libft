/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:27:13 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/28 17:13:15 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_lstsize(t_list *lst)
{
	int		size;

	size = 0;
	if (lst == NULL)
		return (size);
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
