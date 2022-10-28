/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejanssen <ejanssen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:10:48 by ejanssen          #+#    #+#             */
/*   Updated: 2022/10/28 17:41:47 by ejanssen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS _HAS_CHAR16_T_LANGUAGE_SUPPORT
# include "libft.h"

///List functions

/// @brief Allocates and return new node, the member variable content
/// is initialized with the value aprameter content, the variable next
/// is initialized to NULL
/// @param content
/// @return new node
t_list	*ft_lstnew(void *content);

/// @brief Adds the node  new at the beginning of the list
/// @param lst
/// @param new
void	ft_lstadd_front(t_list **lst, t_list *n);

/// @brief Counts the number of nodes in the list
/// @param lst
int		ft_lstsize(t_list *lst);

/// @brief Returns the last node of the list
/// @param lst
/// @return last node of the list
t_list	*ft_lstlast(t_list *lst);

/// @brief add the new node to the back of the list
/// @param lst
/// @param  new
void	ft_lstadd_back(t_list **lst, t_list *n);

/// @brief takes as a parameter a node and frees the memory of the nodes
/// content using the function del given as a parameter and free the node
/// the memory of next must not be freed
/// @param lst
/// @param del
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/// @brief Deltes and frees the given node and every succesor of that node
/// the pointer to the list must be set to NULL
/// @param lst
/// @param del
void	ft_lstclear(t_list **lst, void (*del)(void *));

/// @brief Iterates the list lst and applies the function f on the content
/// of the node
/// @param lst
/// @param f
void	ft_lstiter(t_list *lst, void (*f)(void*));

/// @brief iterates the list lst and applies the function f on the content
/// of each node. Creates a newlist resulting of the successive application
/// of the function f. The  del function is used to delete the
/// content of a node if needed
/// @param lst address of a pointer to a node
/// @param f address to the function used to iterate on the list
/// @param del the address of the function used to delete
/// @return new list NULL if allocation fails
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
