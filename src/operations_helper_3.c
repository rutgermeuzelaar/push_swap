/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations_helper_3.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/20 16:49:04 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 16:49:37 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_operation	get_op(char *input)
{
	const int	len = ft_strlen(input);

	if (ft_strncmp(input, "sa", len) == 0)
		return (sa);
	if (ft_strncmp(input, "sb", len) == 0)
		return (sb);
	if (ft_strncmp(input, "ss", len) == 0)
		return (ss);
	if (ft_strncmp(input, "pa", len) == 0)
		return (pa);
	if (ft_strncmp(input, "pb", len) == 0)
		return (pb);
	if (ft_strncmp(input, "ra", len) == 0)
		return (ra);
	if (ft_strncmp(input, "rb", len) == 0)
		return (rb);
	if (ft_strncmp(input, "rr", len) == 0)
		return (rr);
	if (ft_strncmp(input, "rra", len) == 0)
		return (rra);
	if (ft_strncmp(input, "rrb", len) == 0)
		return (rrb);
	if (ft_strncmp(input, "rrr", len) == 0)
		return (rrr);
	return (NULL);
}
