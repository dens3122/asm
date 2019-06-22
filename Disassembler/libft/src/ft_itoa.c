/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:11:41 by jritchie          #+#    #+#             */
/*   Updated: 2018/11/29 22:02:59 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		sign;

	sign = (n >= 0) ? 1 : -1;
	i = ft_nbrlen(n) + ((sign > 0) ? 0 : 1);
	if (!(res = ft_strnew(i)))
		return (NULL);
	sign < 0 ? res[0] = '-' : 0;
	n == 0 ? res[0] = '0' : 0;
	while (n)
	{
		i--;
		res[i] = ((long)n * sign) % 10 + 48;
		n /= 10;
	}
	return (res);
}
