/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ac.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 11:56:40 by jritchie          #+#    #+#             */
/*   Updated: 2019/02/25 17:14:12 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AC_H
# define AC_H
# include "ft_printf.h"

t_bigdata	g_accuracy = {NULL, {{"d", &ac_dioux}, {"i", &ac_dioux},
		{"o", &ac_dioux}, {"u", &ac_dioux}, {"x", &ac_dioux}, {"X", &ac_dioux},
		{"D", &ac_dioux}, {"O", &ac_dioux}, {"U", &ac_dioux}, {"s", &ac_csp},
		{"S", &ac_ups}, {NULL, NULL}}};
#endif
