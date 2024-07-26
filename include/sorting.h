/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/09 16:26:23 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/13 14:48:55 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H
# include "push_swap.h"

void	sort_three_helper(t_push_swap *push_swap, const int max_index, \
const int min_index);
void	sort_three(t_push_swap *push_swap);
void	sorter(t_push_swap *push_swap);
#endif