/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 09:13:15 by jritchie          #+#    #+#             */
/*   Updated: 2019/06/18 17:19:36 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int		main(int ac, char **av)
{
	t_asm	*ch;

	ch = (t_asm *)malloc(sizeof(t_asm));
	asm_init(ch);
	if (ac == 2)
	{
		read_champ(av[1], ch);
		write_bytes(av[1], ch);
	}
	free(ch);
	return (0);
}
