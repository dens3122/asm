/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 19:30:33 by jritchie          #+#    #+#             */
/*   Updated: 2018/12/11 19:31:40 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_safe(const char *s, int c)
{
	int i;

	if (!s)
		return (NULL);
	i = -1;
	while (s[++i])
		if (s[i] == c)
			return ((char *)(s + i));
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
