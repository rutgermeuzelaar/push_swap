/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   movecheck.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/20 12:10:52 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 12:11:19 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	is_move_a(char *input, const size_t len)
{
	if (len < 3 || len > 4)
	{
		return (false);
	}
	if (ft_strncmp(input, "sa", len - 1) == 0)
		return (true);
	if (ft_strncmp(input, "pa", len - 1) == 0)
		return (true);
	if (ft_strncmp(input, "ra", len - 1) == 0)
		return (true);
	if (ft_strncmp(input, "rra", len - 1) == 0)
		return (true);
	return (false);
}

bool	is_move_b(char *input, const size_t len)
{
	if (len < 3 || len > 4)
	{
		return (false);
	}
	if (ft_strncmp(input, "sb", len - 1) == 0)
		return (true);
	if (ft_strncmp(input, "pb", len - 1) == 0)
		return (true);
	if (ft_strncmp(input, "rb", len - 1) == 0)
		return (true);
	if (ft_strncmp(input, "rrb", len - 1) == 0)
		return (true);
	return (false);
}

bool	is_move_shared(char *input, const size_t len)
{
	if (len < 3 || len > 4)
	{
		return (false);
	}
	if (ft_strncmp(input, "ss", len - 1) == 0)
		return (true);
	if (ft_strncmp(input, "rr", len - 1) == 0)
		return (true);
	if (ft_strncmp(input, "rrr", len - 1) == 0)
		return (true);
	return (false);
}

bool	is_move(char *input, const size_t len)
{
	if (ft_strchr(input, '\n') == NULL)
		return (false);
	if (is_move_a(input, len))
		return (true);
	if (is_move_b(input, len))
		return (true);
	if (is_move_shared(input, len))
		return (true);
	return (false);
}
