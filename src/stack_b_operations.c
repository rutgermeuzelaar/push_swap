/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_b_operations.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 20:31:08 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/14 12:49:07 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sb(t_push_swap *push_swap)
{
	swap_top(&push_swap->stack_b, push_swap->b_fill_size);
}

void	pb(t_push_swap *push_swap)
{
	move_node(&push_swap->stack_a, &push_swap->stack_b, push_swap->a_fill_size);
	if (push_swap->a_fill_size > 0)
	{
		push_swap->a_fill_size--;
		push_swap->b_fill_size++;
	}
}

void	rb(t_push_swap *push_swap)
{
	put_first_back(&push_swap->stack_b, push_swap->b_fill_size);
}

void	rrb(t_push_swap *push_swap)
{
	put_last_front(&push_swap->stack_b, push_swap->b_fill_size);
}
