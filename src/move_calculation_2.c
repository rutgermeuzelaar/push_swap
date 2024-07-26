/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   move_calculation_2.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/13 19:00:36 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/21 22:12:06 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	calculate_movecount(t_push_swap *push_swap, t_moveset *moveset, \
const int index_a, const int index_b)
{
	set_optimal_rotations(push_swap->stack_a, moveset, index_a, 'a');
	set_optimal_rotations(push_swap->stack_b, moveset, index_b, 'b');
	merge_rotations(moveset);
	sum_moveset(moveset);
	case_a_down_b_up(push_swap, moveset, index_a, index_b);
	case_b_down_a_up(push_swap, moveset, index_a, index_b);
}

int	find_cheapest_move(t_push_swap *push_swap, const int size_a)
{
	int			lowest_movecount;
	int			lowest_index;
	int			i;
	t_moveset	moveset;

	lowest_movecount = 0;
	lowest_index = 0;
	i = 0;
	while (i < size_a && lowest_movecount != 1)
	{
		init_moveset(&moveset);
		calc_a_to_b(push_swap, &moveset, i, next_smaller_index(\
		push_swap->stack_b, num_at_index(push_swap->stack_a, i), \
		push_swap->b_fill_size));
		if (i == 0)
			lowest_movecount = moveset.movecount;
		if (moveset.movecount < lowest_movecount)
		{
			lowest_movecount = moveset.movecount;
			lowest_index = i;
		}
		i++;
	}
	return (lowest_index);
}

void	execute_cheapest_move(t_push_swap *push_swap)
{
	const int	cheapest_index = find_cheapest_move(push_swap, \
				push_swap->a_fill_size);
	int			num_at_a;
	int			smaller_index;
	t_moveset	moveset;

	num_at_a = num_at_index(push_swap->stack_a, cheapest_index);
	smaller_index = next_smaller_index(push_swap->stack_b, num_at_a, \
	push_swap->b_fill_size);
	init_moveset(&moveset);
	calc_a_to_b(push_swap, &moveset, cheapest_index, smaller_index);
	execute_moveset(push_swap, &moveset);
}

void	correct_stack_a(t_push_swap *push_swap)
{
	const int	index_b = 0;
	const int	next_greater = next_greater_index(push_swap->stack_a, \
	num_at_index(push_swap->stack_b, index_b), push_swap->a_fill_size);
	t_moveset	moveset;

	init_moveset(&moveset);
	calc_b_to_a(push_swap, &moveset, next_greater, index_b);
	execute_moveset(push_swap, &moveset);
}
