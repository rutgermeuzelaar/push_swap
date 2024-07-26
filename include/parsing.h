/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 15:11:38 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/07 13:52:16 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H
# include "push_swap.h"

bool	is_quoted(int argc, char **argv);
int		str_array_len(char **array);
bool	fill_stack_a(char **args, int i, t_list **stack_a);
#endif