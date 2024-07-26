/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_utilities_2.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/13 14:33:56 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 23:27:28 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	is_sorted_asc(t_list *stack)
{
	const int	size = ft_lstsize(stack);
	int			i;
	t_list		*node;

	i = 0;
	node = stack;
	while (i < size - 1)
	{
		if (*(int *)node->content > *(int *)node->next->content)
		{
			return (false);
		}
		node = node->next;
		i++;
	}
	return (true);
}

void	final_sort(t_push_swap *push_swap)
{
	const int	size_a = ft_lstsize(push_swap->stack_a);
	const int	min_index = get_min_index(push_swap->stack_a, size_a);
	const bool	swap_to_top = to_top(push_swap->stack_a, min_index);

	while (!is_sorted_asc(push_swap->stack_a))
	{
		if (swap_to_top)
		{
			exec_move("ra", ra, push_swap);
		}
		else
		{
			exec_move("rra", rra, push_swap);
		}
	}
}
