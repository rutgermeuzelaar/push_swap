/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeuzela <rmeuzela@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 12:06:20 by rmeuzela      #+#    #+#                 */
/*   Updated: 2023/10/04 13:49:14 by rmeuzela      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
