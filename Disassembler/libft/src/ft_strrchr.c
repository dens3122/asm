/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:08:38 by jritchie          #+#    #+#             */
/*   Updated: 2018/11/26 23:27:23 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = -1;
	while (s[++i])
		;
	if (c == '\0')
		return ((char *)(s + i));
	while (--i >= 0)
		if (s[i] == c)
			return ((char *)(s + i));
	return (NULL);
}
