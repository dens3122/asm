/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 20:00:53 by jritchie          #+#    #+#             */
/*   Updated: 2018/11/27 20:05:00 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*now;
	int		i;

	if (len == 0)
		return (b);
	now = (char *)b;
	i = -1;
	while (++i < (int)len)
		now[i] = c;
	return (b);
}
