/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorter.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/13 14:30:50 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/15 16:34:20 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_four_and_down(t_push_swap *push_swap, const int size_a)
{
	if (size_a == 2)
	{
		exec_move("sa", sa, push_swap);
		return ;
	}
	if (size_a == 3)
	{
		sort_three(push_swap);
		return ;
	}
	exec_move("pb", pb, push_swap);
	sort_three(push_swap);
	correct_stack_a(push_swap);
	final_sort(push_swap);
}

void	sorter(t_push_swap *push_swap)
{
	if (is_sorted_asc(push_swap->stack_a))
		return ;
	if (push_swap->a_fill_size <= 4)
	{
		sort_four_and_down(push_swap, push_swap->a_fill_size);
		return ;
	}
	while (push_swap->b_fill_size != 2)
	{
		exec_move("pb", pb, push_swap);
	}
	while (push_swap->a_fill_size != 3)
	{
		execute_cheapest_move(push_swap);
	}
	sort_three(push_swap);
	while (push_swap->b_fill_size != 0)
	{
		correct_stack_a(push_swap);
	}
	final_sort(push_swap);
}
