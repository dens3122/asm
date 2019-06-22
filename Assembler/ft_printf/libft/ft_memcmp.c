/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:42:21 by jritchie          #+#    #+#             */
/*   Updated: 2018/11/28 14:42:06 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && *((unsigned char *)s1) == *((unsigned char *)s2))
	{
		s1++;
		s2++;
		i++;
	}
	if (i < n)
		return (*((unsigned char *)s1) - *((unsigned char *)s2));
	else
		return (0);
}
