/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs14.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 18:16:27 by jritchie          #+#    #+#             */
/*   Updated: 2019/06/21 17:56:28 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	check_end_symbol(t_asm *ch)
{
	char	c[2];

	c[0] = 0;
	if (lseek(ch->fd, -1, 2) == -1L)
	{
		close(ch->fd);
		error_clear_exit(ch, "Error. Empty file", 0, NULL);
	}
	if (read(ch->fd, c, 1) <= 0)
	{
		close(ch->fd);
		error_clear_exit(ch, "Error reading", 0, NULL);
	}
	if (c[0] != '\n' && ch->tmp != 0)
	{
		close(ch->fd);
		error_clear_exit(ch,
		"Error", 0, NULL);
	}
}
