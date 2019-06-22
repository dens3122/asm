/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 13:34:39 by jritchie          #+#    #+#             */
/*   Updated: 2018/12/20 17:09:09 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1000
# include "libft.h"
# include <fcntl.h>

int			add_data(char *buf, t_list *el, int len, char **line);
t_list		*get_list(t_list **root, char *buf, int len, const int fd);
int			check_data(char **line, t_list *el, int len);
int			get_next_line(const int fd, char **line);
#endif
