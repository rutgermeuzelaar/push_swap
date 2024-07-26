/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations_helper_1.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 18:56:31 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/21 22:01:19 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list	*last_content_node(t_list *stack, const int size)
{
	int		i;
	t_list	*node;

	i = 0;
	node = stack;
	while (i < size - 1)
	{
		node = node->next;
		i++;
	}
	return (node);
}

void	put_last_front(t_list **list, const int size)
{
	t_list		*first;
	t_list		*last;

	if (size <= 1)
	{
		return ;
	}
	first = *list;
	last = last_content_node(*list, size);
	ft_lstindex(first, size - 2)->next = NULL;
	last->next = first;
	*list = last;
}

void	put_first_back(t_list **list, const int size)
{
	t_list		*first;
	t_list		*last;

	if (size <= 1)
	{
		return ;
	}
	first = *list;
	last = last_content_node(*list, size);
	last->next = first;
	*list = first->next;
	first->next = NULL;
}

void	swap_top(t_list **list, const int size)
{
	t_list		*first;
	t_list		*second;

	if (size <= 1)
	{
		return ;
	}
	first = *list;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*list = second;
}

void	move_node(t_list **source, t_list **dest, const int source_size)
{
	t_list		*second;

	if (source_size == 0)
	{
		return ;
	}
	second = (*source)->next;
	ft_lstadd_front(dest, *source);
	*source = second;
}
