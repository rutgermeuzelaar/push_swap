/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_utilities_3.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/14 16:36:48 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 23:24:06 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	num_at_index(t_list *stack, const int index)
{
	return (*(int *)ft_lstindex(stack, index)->content);
}

int	get_min_value(t_list *stack, const int size)
{
	const int	min_index = get_min_index(stack, size);

	return (num_at_index(stack, min_index));
}

int	get_max_value(t_list *stack, const int size)
{
	const int	max_index = get_max_index(stack, size);

	return (num_at_index(stack, max_index));
}

t_list	*ft_lstindex(t_list *lst, const int index)
{
	const int	size = ft_lstsize(lst);
	int			i;

	i = 0;
	if (index < 0 || index >= size)
	{
		return (NULL);
	}
	while (i < index)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
