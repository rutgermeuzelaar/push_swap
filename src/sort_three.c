/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_three.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/07 22:00:59 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/13 15:25:13 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three_helper(t_push_swap *push_swap, const int max_index, \
const int min_index)
{
	if (max_index == 1 && min_index == 0)
	{
		exec_move("rra", rra, push_swap);
		exec_move("sa", sa, push_swap);
	}
	else if (max_index == 2 && min_index == 1)
		exec_move("sa", sa, push_swap);
	else if (max_index == 1 && min_index == 2)
		exec_move("rra", rra, push_swap);
	else if (max_index == 0 && min_index == 1)
		exec_move("ra", ra, push_swap);
	else if (max_index == 0 && min_index == 2)
	{
		exec_move("sa", sa, push_swap);
		exec_move("rra", rra, push_swap);
	}
}

void	sort_three(t_push_swap *push_swap)
{
	const int	max_index = get_max_index(push_swap->stack_a, \
	ft_lstsize(push_swap->stack_a));
	const int	min_index = get_min_index(push_swap->stack_a, \
	ft_lstsize(push_swap->stack_a));

	sort_three_helper(push_swap, max_index, min_index);
}
