/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_a_operations.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 20:31:01 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/14 12:47:04 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_push_swap *push_swap)
{
	swap_top(&push_swap->stack_a, push_swap->a_fill_size);
}

void	pa(t_push_swap *push_swap)
{
	move_node(&push_swap->stack_b, &push_swap->stack_a, push_swap->b_fill_size);
	if (push_swap->b_fill_size > 0)
	{
		push_swap->b_fill_size--;
		push_swap->a_fill_size++;
	}
}

void	ra(t_push_swap *push_swap)
{
	put_first_back(&push_swap->stack_a, push_swap->a_fill_size);
}

void	rra(t_push_swap *push_swap)
{
	put_last_front(&push_swap->stack_a, push_swap->a_fill_size);
}
