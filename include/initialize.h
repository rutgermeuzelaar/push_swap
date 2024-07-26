/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   initialize.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 15:09:41 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/21 22:53:24 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INITIALIZE_H
# define INITIALIZE_H
# include "push_swap.h"

bool	init_empty_list(const int size, t_list **list);
bool	init_stack_a(int argc, char **argv, t_list **stack_a);
bool	init_push_swap(int argc, char **argv, t_push_swap *push_swap);
bool	init_single_arg(char **argv, t_list **stack_a);

bool	init_multi_arg(char **argv, t_list **stack_a);
void	init_moveset(t_moveset *moveset);
#endif