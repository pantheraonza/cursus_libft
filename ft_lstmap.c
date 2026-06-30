/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 21:16:07 by criredon          #+#    #+#             */
/*   Updated: 2026/06/11 21:16:09 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*walker;
	t_list	*newlist;
	t_list	*newnode;

	if (!lst || !f || !del)
		return (NULL);
	walker = lst;
	newlist = NULL;
	while (walker != NULL)
	{
		newnode = ft_lstnew(f(walker->content));
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		walker = walker->next;
	}
	return (newlist);
}

// ******************************* M A N U A L ********************************
// The function ft_lstmap DOES NOT modify the original linked list.
// It CREATES a NEW linked list by applying function 'f' to every node.
//
// t_list *walker			helper pointer to walk through the original list
// t_list *newlist			head of the new linked list
// t_list *newnode			new node created for the new list
// if (!lst || !f || !del)	safety check
// newlist = NULL			initialize the new linked list as empty
// walker = lst				start the walk from the head of the original list
// while (walker != NULL)	walk through every node until the end (NULL)
// newnode = ft_lstnew		create a new node containing the content from 'f'
// if (!newnode)			memory allocation failed
// ft_lstclear				free every node already created to avoid leaks
// return (NULL)			stop because the new list cannot be completed
// ft_lstadd_back			attach the new node at the end of the new list
// walker = walker->nextmove the walker pointer to the next node
// return (newlist)			return the head of the newly created list
//
// There are edge cases to take into account:
// In case of a memory allocation failure, every previously created node is 
// deleted to prevent memory leaks.
// ******************************* M A N U A L ********************************