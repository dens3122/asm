/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disassemble.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 09:13:15 by jritchie          #+#    #+#             */
/*   Updated: 2019/06/18 17:19:36 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISASSEMBLE_H
# define DISASSEMBLE_H

# include "libft.h"
# include "op.h"
# include <stdio.h>
# define MAX(a, b) (a > b ? a : b)

void	disassemble(int in, int out);
void	add_args(char *str, char cmd, unsigned char *bytes, unsigned char args);

#endif
