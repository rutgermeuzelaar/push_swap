/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   move_calculation.h                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/13 19:04:23 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 12:04:38 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVE_CALCULATION_H
# define MOVE_CALCULATION_H
# include "push_swap.h"

int		get_min(int a, int b);
int		get_max(int a, int b);
void	merge_rotations(t_moveset *moveset);
void	sum_moveset(t_moveset *moveset);
void	set_optimal_rotations(t_list *stack, t_moveset *moveset, \
		const int num_index, const char stack_name);

void	calculate_movecount(t_push_swap *push_swap, t_moveset *moveset, \
		const int index_a, const int index_b);
int		find_cheapest_move(t_push_swap *push_swap, const int size_a);
void	execute_cheapest_move(t_push_swap *push_swap);
void	correct_stack_a(t_push_swap *push_swap);

bool	to_top(t_list *stack, const int num_index);
bool	to_bottom(t_list *stack, const int num_index);

void	calc_a_to_b(t_push_swap *push_swap, t_moveset *moveset, \
const int index_a, const int index_b);
void	calc_b_to_a(t_push_swap *push_swap, t_moveset *moveset, \
const int index_a, const int index_b);
bool	handle_cases(t_list *stack, t_moveset *moveset, \
const int num_index, const char stack_name);

void	case_a_down_b_up(t_push_swap *push_swap, t_moveset *moveset, \
const int index_a, const int index_b);
void	case_b_down_a_up(t_push_swap *push_swap, t_moveset *moveset, \
const int index_a, const int index_b);
#endif