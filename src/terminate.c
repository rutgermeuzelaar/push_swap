/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   terminate.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 15:02:48 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/05 15:15:44 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_split(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	free_push_swap(t_push_swap *push_swap)
{
	ft_lstclear(&push_swap->stack_a, free);
	ft_lstclear(&push_swap->stack_b, free);
}
