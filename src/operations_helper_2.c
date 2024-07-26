/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations_helper_2.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/14 12:22:47 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/22 11:24:09 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	exec_move(const char *name, void (*move)(t_push_swap*), \
t_push_swap	*push_swap)
{
	ft_printf("%s\n", name);
	move(push_swap);
}

void	exec_move_mute(t_operation move, t_push_swap *push_swap)
{
	move(push_swap);
}
