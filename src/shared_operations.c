/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   shared_operations.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 20:30:50 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/07 13:57:14 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ss(t_push_swap *push_swap)
{
	sa(push_swap);
	sb(push_swap);
}

void	rr(t_push_swap *push_swap)
{
	ra(push_swap);
	rb(push_swap);
}

void	rrr(t_push_swap *push_swap)
{
	rra(push_swap);
	rrb(push_swap);
}
