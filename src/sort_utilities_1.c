/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_utilities_1.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/08 12:40:46 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 23:35:09 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_max_index(t_list *stack, const int size)
{
	int			i;
	int			max_value;
	int			max_index;
	t_list		*node;

	i = 0;
	max_value = *(int *)stack->content;
	max_index = 0;
	node = stack;
	while (i < size)
	{
		if (*(int *)node->content > max_value)
		{
			max_value = *(int *)node->content;
			max_index = i;
		}
		node = node->next;
		i++;
	}
	return (max_index);
}

int	get_min_index(t_list *stack, const int size)
{
	int			i;
	int			min_value;
	int			min_index;
	t_list		*node;

	i = 0;
	min_value = *(int *)stack->content;
	min_index = 0;
	node = stack;
	while (i < size)
	{
		if (*(int *)node->content < min_value)
		{
			min_value = *(int *)node->content;
			min_index = i;
		}
		node = node->next;
		i++;
	}
	return (min_index);
}

int	next_greater_index(t_list *stack, const int number, const int size)
{
	int			i;
	int			next_greater;
	int			current;
	int			index;
	t_list		*node;

	i = 0;
	index = get_max_index(stack, size);
	next_greater = num_at_index(stack, index);
	node = stack;
	if (number > next_greater)
		return (-1);
	while (i < size)
	{
		current = *(int *)node->content;
		if (current > number && current < next_greater)
		{
			next_greater = current;
			index = i;
		}
		node = node->next;
		i++;
	}
	return (index);
}

int	next_smaller_index(t_list *stack, const int number, const int size)
{
	int			i;
	int			next_smaller;
	int			current;
	int			index;
	t_list		*node;

	i = 0;
	index = get_min_index(stack, size);
	next_smaller = num_at_index(stack, index);
	node = stack;
	if (number < next_smaller)
		return (-1);
	while (i < size)
	{
		current = *(int *)node->content;
		if (current < number && current > next_smaller)
		{
			next_smaller = current;
			index = i;
		}
		node = node->next;
		i++;
	}
	return (index);
}
