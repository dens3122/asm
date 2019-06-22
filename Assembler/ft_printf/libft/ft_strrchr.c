/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 18:37:54 by jritchie          #+#    #+#             */
/*   Updated: 2018/12/06 14:32:03 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *temp;

	temp = NULL;
	while (*s || (!*s && c == 0))
	{
		if (*s == c)
			temp = (char *)s;
		if (*s == 0)
			break ;
		s++;
	}
	return (temp);
}
