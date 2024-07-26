/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 18:19:16 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/22 08:19:58 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
	if (!valid_input(&push_swap, true))
	{
		return (-1);
	}
	sorter(&push_swap);
	free_push_swap(&push_swap);
	return (0);
}
