/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   initialize_1.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 14:58:25 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/22 11:55:10 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	init_empty_list(const int size, t_list **list)
{
	int		i;
	t_list	*new_node;

	i = 0;
	*list = ft_lstnew(NULL);
	if (*list == NULL)
	{
		return (false);
	}
	while (i < (size - 1))
	{
		new_node = ft_lstnew(NULL);
		if (new_node == NULL)
		{
			ft_lstclear(list, free);
			return (false);
		}
		ft_lstadd_back(list, new_node);
		i++;
	}
	return (true);
}

bool	init_stack_a(int argc, char **argv, t_list	**stack_a)
{
	if (is_quoted(argc, argv))
	{
		if (!init_single_arg(argv, stack_a))
		{
			return (false);
		}
	}
	else
	{
		if (!init_multi_arg(argv, stack_a))
		{
			return (false);
		}
	}
	return (true);
}

bool	init_push_swap(int argc, char **argv, t_push_swap *push_swap)
{
	int	size;

	size = 0;
	if (!init_stack_a(argc, argv, &push_swap->stack_a))
	{
		return (false);
	}
	size = ft_lstsize(push_swap->stack_a);
	push_swap->stack_b = NULL;
	push_swap->a_fill_size = size;
	push_swap->b_fill_size = 0;
	return (true);
}
