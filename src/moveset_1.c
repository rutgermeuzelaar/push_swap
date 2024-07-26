/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   moveset_1.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/13 16:49:08 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/19 22:48:21 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	execute_rotations_a(t_push_swap *push_swap, t_moveset *moveset)
{
	while (moveset->ra_count != 0)
	{
		exec_move("ra", ra, push_swap);
		moveset->ra_count--;
	}
	while (moveset->rra_count != 0)
	{
		exec_move("rra", rra, push_swap);
		moveset->rra_count--;
	}
}

void	execute_rotations_b(t_push_swap *push_swap, t_moveset *moveset)
{
	while (moveset->rb_count != 0)
	{
		exec_move("rb", rb, push_swap);
		moveset->rb_count--;
	}
	while (moveset->rrb_count != 0)
	{
		exec_move("rrb", rrb, push_swap);
		moveset->rrb_count--;
	}
}

void	execute_shared_rotations(t_push_swap *push_swap, t_moveset *moveset)
{
	while (moveset->rr_count != 0)
	{
		exec_move("rr", rr, push_swap);
		moveset->rr_count--;
	}
	while (moveset->rrr_count != 0)
	{
		exec_move("rrr", rrr, push_swap);
		moveset->rrr_count--;
	}
}
