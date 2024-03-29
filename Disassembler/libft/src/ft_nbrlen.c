/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:05:34 by jritchie          #+#    #+#             */
/*   Updated: 2019/01/30 16:30:50 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(unsigned long long int nbr)
{
	int	i;

	i = 0;
	if (!nbr)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}
