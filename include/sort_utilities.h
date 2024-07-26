/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_utilities.h                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/09 16:21:54 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 23:35:51 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_UTILITIES_H
# define SORT_UTILITIES_H
# include "push_swap.h"

int		get_max_index(t_list *stack, const int size);
int		get_min_index(t_list *stack, const int size);
int		next_greater_index(t_list *stack, const int number, const int size);
int		next_smaller_index(t_list *stack, const int number, const int size);
bool	is_sorted_asc(t_list *stack);
void	final_sort(t_push_swap *push_swap);

int		num_at_index(t_list *stack, const int index);
int		get_min_value(t_list *stack, const int size);
int		get_max_value(t_list *stack, const int size);
t_list	*ft_lstindex(t_list *lst, const int index);
#endif