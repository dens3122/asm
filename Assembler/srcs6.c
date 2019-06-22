/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 12:20:47 by jritchie          #+#    #+#             */
/*   Updated: 2019/06/18 19:55:09 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void		magic_name_comment_to_byte(t_asm *ch)
{
	ch->last_addr = ch->current_addr;
	ch->current_addr = 0;
	put_bytes(ch, COREWAR_EXEC_MAGIC, 4);
	name_to_byte(ch);
	ch->byte[ch->current_addr++] = 0;
	ch->byte[ch->current_addr++] = 0;
	ch->byte[ch->current_addr++] = 0;
	ch->byte[ch->current_addr++] = 0;
	put_bytes(ch, ch->last_addr, 4);
	comment_to_byte(ch);
	ch->byte[ch->current_addr++] = 0;
	ch->byte[ch->current_addr++] = 0;
	ch->byte[ch->current_addr++] = 0;
	ch->byte[ch->current_addr++] = 0;
}

void		part_byte(t_asm *ch, char *file)
{
	char	*line;
	char	*tmp;

	open_file(ch, file);
	while ((get_next_line(ch->fd, &line)) > 0)
	{
		tmp = ft_strtrim(line);
		ft_strdel(&line);
		if (tmp)
		{
			ch->last = 0;
			if (tmp[0] != COMMENT_CHAR)
				check_line_to_byte(ch, tmp, 0);
			ft_strdel(&tmp);
		}
	}
	close(ch->fd);
}

int			read_champ(char *file, t_asm *ch)
{
	char	*line;
	char	*tmp;

	init_labels(file, ch);
	open_file(ch, file);
	while ((get_next_line(ch->fd, &line)) > 0)
	{
		tmp = ft_strtrim(line);
		ft_strdel(&line);
		if (tmp)
		{
			ch->last = 0;
			if (tmp[0] != COMMENT_CHAR)
				check_line(ch, tmp, 1);
			ft_strdel(&tmp);
		}
		ch->row++;
	}
	close(ch->fd);
	magic_name_comment_to_byte(ch);
	part_byte(ch, file);
	return (0);
}

void		put_bytes(t_asm *ch, int a, int count)
{
	unsigned int	q;

	if (a < 0)
		q = 4294967296 + a;
	else
		q = a;
	while (count > 0)
	{
		ch->byte[ch->current_addr++] = get_byte(q, --count);
	}
}

char		*next_arg(t_asm *ch, char *line)
{
	char	*tmp;
	char	*tmp2;

	tmp = ft_strchr(line, SEPARATOR_CHAR);
	if (tmp == NULL)
		error_clear_exit(ch, "Error in arguments", 1, line);
	tmp2 = ft_strdup(tmp + 1);
	ft_strdel(&line);
	return (tmp2);
}
