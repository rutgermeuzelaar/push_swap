/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   structures.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 15:00:32 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 12:07:39 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H
# include "push_swap.h"

typedef struct s_push_swap
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		a_fill_size;
	int		b_fill_size;
}	t_push_swap;

typedef struct s_moveset
{
	int	sa_count;
	int	sb_count;
	int	ss_count;
	int	pa_count;
	int	pb_count;
	int	ra_count;
	int	rb_count;
	int	rr_count;
	int	rra_count;
	int	rrb_count;
	int	rrr_count;
	int	movecount;
}	t_moveset;

#endif