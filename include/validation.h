/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validation.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/04 19:10:30 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/22 08:19:31 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_H
# define VALIDATION_H
# include "push_swap.h"

bool	is_number(const char *string);
bool	is_valid_int(const char *string);
bool	contains_duplicates(t_list *list);
int		count_symbol(char *string, char symbol);
bool	empty_arg(char *arg);

bool	valid_input(t_push_swap *push_swap, const bool check_sort);
#endif