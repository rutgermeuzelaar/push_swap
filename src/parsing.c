/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 18:22:18 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 22:54:02 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	is_quoted(int argc, char **argv)
{
	if (argc != 2)
	{
		return (false);
	}
	if (ft_strchr(argv[1], ' ') == NULL)
	{
		return (false);
	}
	return (true);
}

int	str_array_len(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		i++;
	}
	return (i);
}

bool	fill_stack_a(char **args, int i, t_list **stack_a)
{
	const int	size = ft_lstsize(*stack_a) + i;
	t_list		*node;
	int			*num;

	node = (*stack_a);
	while (i < size)
	{
		if (!is_valid_int(args[i]))
		{
			ft_putstr_fd("Error\n", 2);
			ft_lstclear(stack_a, free);
			return (false);
		}
		num = malloc(sizeof(int));
		if (num == NULL)
		{
			ft_lstclear(stack_a, free);
			return (false);
		}
		*num = ft_atoi(args[i]);
		node->content = num;
		node = node->next;
		i++;
	}
	return (true);
}
