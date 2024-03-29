/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 22:25:54 by jritchie          #+#    #+#             */
/*   Updated: 2019/06/18 18:19:55 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vm.h"

int						op_check_ld(t_process *p)
{
	unsigned char	reg;
	int				codage;

	codage = get_map_pos(p, (p->pc - p->map) + 1);
	if (((codage >> 4) & 3) != REG_CODE)
		return (0);
	if (((codage >> 6) & 3) == 1 || ((codage >> 6) & 3) == 0)
		return (0);
	if (((codage >> 6) & 3) == DIR_CODE)
		reg = get_map_pos(p, (p->pc - p->map) + 2 + g_op_tab[1].label_size);
	else
		reg = get_map_pos(p, (p->pc - p->map) + 2 + IND_SIZE);
	if (!check_reg(reg))
		return (0);
	return (1);
}

int						op_check_lld(t_process *p)
{
	return (op_check_ld(p));
}

int						op_check_fork(t_process *p)
{
	(void)p;
	return (1);
}

int						op_check_lfork(t_process *p)
{
	(void)p;
	return (1);
}

int						op_check_aff(t_process *p)
{
	int				codage;

	codage = get_map_pos(p, (p->pc - p->map) + 1);
	if (codage == 64)
	{
		if (!check_reg(get_map_pos(p, (p->pc - p->map) + 2)))
			return (0);
	}
	else
		return (0);
	return (1);
}
