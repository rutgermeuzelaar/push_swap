/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   move_calculation_1.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/13 16:13:34 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 12:16:45 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_min(int a, int b)
{
	if (a == b)
	{
		return (a);
	}
	if (a > b)
	{
		return (b);
	}
	else
	{
		return (a);
	}
}

int	get_max(int a, int b)
{
	if (a == b)
	{
		return (a);
	}
	if (a > b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

void	merge_rotations(t_moveset *moveset)
{
	if (moveset->ra_count != 0 && moveset->rb_count != 0)
	{
		moveset->rr_count = get_min(moveset->ra_count, moveset->rb_count);
		moveset->ra_count -= moveset->rr_count;
		moveset->rb_count -= moveset->rr_count;
	}
	if (moveset->rra_count != 0 && moveset->rrb_count != 0)
	{
		moveset->rrr_count = get_min(moveset->rra_count, moveset->rrb_count);
		moveset->rra_count -= moveset->rrr_count;
		moveset->rrb_count -= moveset->rrr_count;
	}
}

void	sum_moveset(t_moveset *moveset)
{
	moveset->movecount += moveset->sa_count;
	moveset->movecount += moveset->sb_count;
	moveset->movecount += moveset->ss_count;
	moveset->movecount += moveset->pa_count;
	moveset->movecount += moveset->pb_count;
	moveset->movecount += moveset->ra_count;
	moveset->movecount += moveset->rb_count;
	moveset->movecount += moveset->rr_count;
	moveset->movecount += moveset->rra_count;
	moveset->movecount += moveset->rrb_count;
	moveset->movecount += moveset->rrr_count;
}

void	set_optimal_rotations(t_list *stack, t_moveset *moveset, \
const int num_index, const char stack_name)
{
	const int	size = ft_lstsize(stack);

	if (handle_cases(stack, moveset, num_index, stack_name))
	{
		return ;
	}
	if (to_top(stack, num_index))
	{
		if (stack_name == 'a')
			moveset->ra_count = num_index;
		else
			moveset->rb_count = num_index;
	}
	else
	{
		if (stack_name == 'a')
			moveset->rra_count = size - num_index;
		else
			moveset->rrb_count = size - num_index;
	}
}
