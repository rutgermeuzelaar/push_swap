/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   moveset.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/13 16:51:20 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/19 22:16:37 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVESET_H
# define MOVESET_H
# include "push_swap.h"

void	execute_rotations_a(t_push_swap *push_swap, t_moveset *moveset);
void	execute_rotations_b(t_push_swap *push_swap, t_moveset *moveset);
void	execute_shared_rotations(t_push_swap *push_swap, t_moveset *moveset);
void	execute_rotations(t_push_swap *push_swap, t_moveset *moveset);

void	execute_swaps(t_push_swap *push_swap, t_moveset *moveset);
void	execute_pushes(t_push_swap *push_swap, t_moveset *moveset);
void	execute_moveset(t_push_swap *push_swap, t_moveset *moveset);
void	copy_moveset(t_moveset src, t_moveset *dest);
#endif