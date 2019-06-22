/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 14:15:32 by jritchie          #+#    #+#             */
/*   Updated: 2018/12/07 14:12:32 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 1;
	while (i < n)
	{
		if (flag == 1)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		if (src[i] == '\0')
			flag = 0;
		i++;
	}
	return (dest);
}
