/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checker.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/15 14:40:44 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/22 11:28:03 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*extract_move(char *input)
{
	const size_t	len = ft_strlen(input);

	if (!is_move(input, len))
	{
		return (NULL);
	}
	input[len - 1] = '\0';
	return (input);
}

bool	exec_args(t_push_swap *push_swap)
{
	char		*input;
	char		*move;
	int			i;

	i = 0;
	while (1)
	{
		input = get_next_line(0);
		if (input == NULL)
		{
			break ;
		}
		move = extract_move(input);
		if (move == NULL)
		{
			ft_putstr_fd("Error\n", 2);
			free(input);
			return (false);
		}
		exec_move_mute(get_op(move), push_swap);
		free(input);
		i++;
	}
	return (true);
}

bool	checker(t_push_swap *push_swap)
{
	if (!exec_args(push_swap))
	{
		return (false);
	}
	if (push_swap->b_fill_size == 0 && is_sorted_asc(push_swap->stack_a))
	{
		ft_putendl_fd("OK", 1);
		return (true);
	}
	ft_putendl_fd("KO", 1);
	return (false);
}

int	main(int argc, char **argv)
{
	t_push_swap	push_swap;

	if (argc == 1 || empty_arg(argv[1]))
	{
		return (-1);
	}
	if (!init_push_swap(argc, argv, &push_swap))
	{
		return (-1);
	}
	if (!valid_input(&push_swap, false))
	{
		return (-1);
	}
	if (!checker(&push_swap))
	{
		free_push_swap(&push_swap);
		return (-1);
	}
	free_push_swap(&push_swap);
	return (0);
}
