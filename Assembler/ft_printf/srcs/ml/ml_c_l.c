/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ml_c_l.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 20:17:10 by jritchie          #+#    #+#             */
/*   Updated: 2019/02/01 15:33:17 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ml_c_l(va_list ap)
{
	unsigned int	c;
	char			*s;
	size_t			size;

	c = va_arg(ap, unsigned int);
	s = conver(c, &size);
	info_add_strn(s, size, 1);
	ft_strdel(&s);
}
