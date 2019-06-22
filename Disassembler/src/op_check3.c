/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_check3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:35:48 by jritchie          #+#    #+#             */
/*   Updated: 2019/06/18 14:11:54 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vm.h"

int						op_check_st(t_process *p)
{
	unsigned char	reg;
	int				codage;

	reg = get_map_pos(p, (p->pc - p->map) + 2);
	if (!check_reg(reg))
		return (0);
	codage = get_map_pos(p, (p->pc - p->map) + 1);
	if (((codage >> 6) & 3) != 1)
		return (0);
	if (((codage >> 4) & 3) == 2 || ((codage >> 4) & 3) == 0)
		return (0);
	if (((codage >> 4) & 3) == 1)
		if (!check_reg(get_map_pos(p, (p->pc - p->map) + 3)))
			return (0);
	if (((codage >> 2) & 3))
		return (0);
	return (1);
}

int						op_check_add(t_process *p)
{
	unsigned char	reg;
	int				codage;

	codage = get_map_pos(p, (p->pc - p->map) + 1);
	if (codage != (4 + 16 + 64))
		return (0);
	reg = get_map_pos(p, (p->pc - p->map) + 2);
	if (!check_reg(reg))
		return (0);
	reg = get_map_pos(p, (p->pc - p->map) + 3);
	if (!check_reg(reg))
		return (0);
	reg = get_map_pos(p, (p->pc - p->map) + 4);
	if (!check_reg(reg))
		return (0);
	return (1);
}

int						op_check_sub(t_process *p)
{
	unsigned char	reg;
	int				codage;

	codage = get_map_pos(p, (p->pc - p->map) + 1);
	if (codage != (4 + 16 + 64))
		return (0);
	reg = get_map_pos(p, (p->pc - p->map) + 2);
	if (!check_reg(reg))
		return (0);
	reg = get_map_pos(p, (p->pc - p->map) + 3);
	if (!check_reg(reg))
		return (0);
	reg = get_map_pos(p, (p->pc - p->map) + 4);
	if (!check_reg(reg))
		return (0);
	return (1);
}

int						op_check_zjmp(t_process *p)
{
	(void)p;
	return (1);
}
