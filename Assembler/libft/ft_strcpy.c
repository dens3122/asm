/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 13:24:19 by jritchie          #+#    #+#             */
/*   Updated: 2018/12/07 14:10:13 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char *s;

	s = dest;
	while (*src != '\0')
	{
		*s = *src;
		s++;
		src++;
	}
	*s = '\0';
	return (dest);
}
