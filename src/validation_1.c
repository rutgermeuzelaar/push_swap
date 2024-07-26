/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validation_1.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 18:25:12 by rmeuzela      #+#    #+#                 */
/*   Updated: 2024/06/20 23:49:02 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

bool	is_number(const char *string)
{
	const size_t	len = ft_strlen(string);
	size_t			i;
	size_t			j;

	i = 0;
	if (string[i] == '-')
	{
		i++;
	}
	j = i;
	while (i < len && ft_isdigit(string[i]))
	{
		i++;
	}
	if (j == i || i != len)
	{
		return (false);
	}
	return (true);
}

bool	is_valid_int(const char *string)
{
	const size_t	len = ft_strlen(string);
	const char		*min_int = "-2147483648";
	const char		*max_int = "2147483647";
	const size_t	len_min = ft_strlen(min_int);
	const size_t	len_max = ft_strlen(max_int);

	if (len == 0 || !is_number(string))
		return (false);
	if (string[0] == '-')
	{
		if (len == len_min && ft_strncmp(string, min_int, len) > 0)
			return (false);
		if (len > len_min)
			return (false);
	}
	else
	{
		if (len == len_max && ft_strncmp(string, max_int, len) > 0)
			return (false);
		if (len > len_max)
			return (false);
	}
	return (true);
}

bool	contains_duplicates(t_list *list)
{
	const int	size = ft_lstsize(list);
	int			i;
	int			j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (num_at_index(list, i) == num_at_index(list, j))
			{
				ft_putstr_fd("Error\n", 2);
				return (true);
			}
			j++;
		}
		i++;
	}
	return (false);
}

int	count_symbol(char *string, char symbol)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (string[i] != '\0')
	{
		if (string[i] == symbol)
		{
			count++;
		}
		i++;
	}
	return (count);
}

bool	empty_arg(char *arg)
{
	const int	len = ft_strlen(arg);
	const int	space_count = count_symbol(arg, ' ');

	if (len == 0)
		return (true);
	if (len == space_count)
		return (true);
	return (false);
}
