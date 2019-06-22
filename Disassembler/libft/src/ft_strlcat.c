/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:17:39 by jritchie          #+#    #+#             */
/*   Updated: 2018/11/26 23:04:53 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	while (dst[++i] && i < size)
		;
	while (src[++j] && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (i + ft_strlen(src + j));
}
