/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   movecheck.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/20 12:12:42 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 12:14:15 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVECHECK_H
# define MOVECHECK_H
# include "push_swap.h"

bool	is_move_a(char *input, const size_t len);
bool	is_move_b(char *input, const size_t len);
bool	is_move_shared(char *input, const size_t len);
bool	is_move(char *input, const size_t len);
#endif