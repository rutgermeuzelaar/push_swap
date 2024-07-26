/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   move_calculation_3.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/13 20:36:45 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 12:17:57 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	to_top(t_list *stack, const int num_index)
{
	const int	size = ft_lstsize(stack);
	int			median_index;

	median_index = 0;
	if (num_index <= 0)
		return (true);
	if (size % 2 != 0)
		median_index = ((size + 1) / 2) - 1;
	else
		median_index = (size / 2) - 1;
	if (num_index <= median_index)
	{
		return (true);
	}
	return (false);
}

bool	to_bottom(t_list *stack, const int num_index)
{
	if (to_top(stack, num_index))
	{
		return (false);
	}
	return (true);
}

void	calc_a_to_b(t_push_swap *push_swap, t_moveset *moveset, \
const int index_a, const int index_b)
{
	moveset->pb_count = 1;
	calculate_movecount(push_swap, moveset, index_a, index_b);
}

void	calc_b_to_a(t_push_swap *push_swap, t_moveset *moveset, \
const int index_a, const int index_b)
{
	moveset->pa_count = 1;
	calculate_movecount(push_swap, moveset, index_a, index_b);
}
