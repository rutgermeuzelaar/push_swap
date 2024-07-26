/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   moveset_2.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/13 16:49:38 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 12:23:41 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	execute_rotations(t_push_swap *push_swap, t_moveset *moveset)
{
	execute_shared_rotations(push_swap, moveset);
	execute_rotations_a(push_swap, moveset);
	execute_rotations_b(push_swap, moveset);
}

void	execute_swaps(t_push_swap *push_swap, t_moveset *moveset)
{
	while (moveset->sa_count != 0)
	{
		exec_move("sa", sa, push_swap);
		moveset->sa_count--;
	}
	while (moveset->sb_count != 0)
	{
		exec_move("sb", sb, push_swap);
		moveset->sb_count--;
	}
}

void	execute_pushes(t_push_swap *push_swap, t_moveset *moveset)
{
	while (moveset->pa_count != 0)
	{
		exec_move("pa", pa, push_swap);
		moveset->pa_count--;
	}
	while (moveset->pb_count != 0)
	{
		exec_move("pb", pb, push_swap);
		moveset->pb_count--;
	}
}

void	execute_moveset(t_push_swap *push_swap, t_moveset *moveset)
{
	execute_swaps(push_swap, moveset);
	execute_rotations(push_swap, moveset);
	execute_pushes(push_swap, moveset);
}

void	copy_moveset(t_moveset src, t_moveset *dest)
{
	init_moveset(dest);
	dest->movecount = src.movecount;
	dest->pa_count = src.pa_count;
	dest->pb_count = src.pb_count;
	dest->ra_count = src.ra_count;
	dest->rb_count = src.rb_count;
	dest->rr_count = src.rr_count;
	dest->rra_count = src.rra_count;
	dest->rrb_count = src.rrb_count;
	dest->rrr_count = src.rrr_count;
	dest->sa_count = src.sa_count;
	dest->sb_count = src.sb_count;
	dest->ss_count = src.ss_count;
}
