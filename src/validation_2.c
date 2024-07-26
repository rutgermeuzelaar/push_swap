/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validation_2.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/06 12:42:57 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/22 08:19:07 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	valid_input(t_push_swap *push_swap, const bool check_sort)
{
	if (push_swap->a_fill_size == 0)
	{
		return (false);
	}
	if (contains_duplicates(push_swap->stack_a))
	{
		free_push_swap(push_swap);
		return (false);
	}
	if (check_sort && is_sorted_asc(push_swap->stack_a))
	{
		free_push_swap(push_swap);
		return (false);
	}
	return (true);
}
