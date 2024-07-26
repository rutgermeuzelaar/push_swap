/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   initialize_2.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 18:03:48 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 17:16:09 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	init_multi_arg(char **argv, t_list **stack_a)
{
	const int	size = str_array_len(argv) - 1;
	int			i;

	i = 1;
	if (!init_empty_list(size, stack_a))
	{
		return (false);
	}
	if (!fill_stack_a(argv, i, stack_a))
	{
		return (false);
	}
	return (true);
}

bool	init_single_arg(char **argv, t_list **stack_a)
{
	char	**args;
	int		i;

	args = ft_split(argv[1], ' ');
	i = 0;
	if (args == NULL)
	{
		return (false);
	}
	if (!init_empty_list(str_array_len(args), stack_a))
	{
		free_split(args);
		return (false);
	}
	if (!fill_stack_a(args, i, stack_a))
	{
		free_split(args);
		return (false);
	}
	free_split(args);
	return (true);
}

void	init_moveset(t_moveset *moveset)
{
	moveset->sa_count = 0;
	moveset->sb_count = 0;
	moveset->ss_count = 0;
	moveset->pa_count = 0;
	moveset->pb_count = 0;
	moveset->ra_count = 0;
	moveset->rb_count = 0;
	moveset->rr_count = 0;
	moveset->rra_count = 0;
	moveset->rrb_count = 0;
	moveset->rrr_count = 0;
	moveset->movecount = 0;
}
