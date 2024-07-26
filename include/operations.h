/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 19:17:00 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/22 11:38:17 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H
# include "push_swap.h"

typedef void	(*t_operation)(t_push_swap *push_swap);

t_list			*last_content_node(t_list *stack, const int size);

void			put_last_front(t_list **list, const int size);
void			put_first_back(t_list **list, const int size);
void			swap_top(t_list **list, const int size);
void			move_node(t_list **source, t_list **dest, \
				const int source_size);
void			exec_move(const char *name, t_operation move, \
				t_push_swap	*push_swap);

void			exec_move_mute(t_operation move, t_push_swap *push_swap);

void			sa(t_push_swap *push_swap);
void			pa(t_push_swap *push_swap);
void			ra(t_push_swap *push_swap);
void			rra(t_push_swap *push_swap);

void			sb(t_push_swap *push_swap);
void			pb(t_push_swap *push_swap);
void			rb(t_push_swap *push_swap);
void			rrb(t_push_swap *push_swap);

void			ss(t_push_swap *push_swap);
void			rr(t_push_swap *push_swap);
void			rrr(t_push_swap *push_swap);

t_operation		get_op(char *input);

#endif