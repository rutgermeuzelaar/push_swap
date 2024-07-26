/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   move_calculation_4.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/14 13:19:50 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/19 22:52:33 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	case_a_down_b_up(t_push_swap *push_swap, t_moveset *moveset, \
const int index_a, const int index_b)
{
	t_moveset	case_moves;

	init_moveset(&case_moves);
	if (index_a == -1 || index_b == -1)
	{
		return ;
	}
	if (!(to_bottom(push_swap->stack_a, index_a) && to_top(push_swap->stack_b, \
	index_b)))
	{
		return ;
	}
	case_moves.pb_count = 1;
	case_moves.rr_count = get_min(index_a, index_b);
	case_moves.ra_count = index_a - case_moves.rr_count;
	case_moves.rb_count = index_b - case_moves.rr_count;
	sum_moveset(&case_moves);
	if (case_moves.movecount < moveset->movecount)
	{
		copy_moveset(case_moves, moveset);
	}
}

void	case_b_down_a_up(t_push_swap *push_swap, t_moveset *moveset, \
const int index_a, const int index_b)
{
	t_moveset	case_moves;
	const int	rra_count = push_swap->a_fill_size - index_a;
	const int	rrb_count = push_swap->b_fill_size - index_b;

	init_moveset(&case_moves);
	if (index_a == -1 || index_b == -1)
	{
		return ;
	}
	if (!(to_bottom(push_swap->stack_b, index_b) && to_top(push_swap->stack_a, \
	index_a)))
	{
		return ;
	}
	case_moves.pb_count = 1;
	case_moves.rrr_count = get_min(rra_count, rrb_count);
	case_moves.rra_count = rra_count - case_moves.rrr_count;
	case_moves.rrb_count = rrb_count - case_moves.rrr_count;
	sum_moveset(&case_moves);
	if (case_moves.movecount < moveset->movecount)
	{
		copy_moveset(case_moves, moveset);
	}
}

bool	handle_cases(t_list *stack, t_moveset *moveset, \
const int num_index, const char stack_name)
{
	const int	size = ft_lstsize(stack);

	if (stack_name == 'b' && num_index == -1)
	{
		set_optimal_rotations(stack, moveset, get_max_index(stack, size), 'b');
		return (true);
	}
	if (stack_name == 'a' && num_index == -1)
	{
		set_optimal_rotations(stack, moveset, get_min_index(stack, size), 'a');
		return (true);
	}
	return (false);
}
