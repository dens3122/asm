/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextword.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:52:51 by jritchie          #+#    #+#             */
/*   Updated: 2018/12/01 17:01:23 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nextword(char const *s, char c)
{
	int	i;

	i = -1;
	if (!s || c == '\0')
		return (NULL);
	while (s[++i] && s[i] != c)
		;
	while (s[i] && s[i] == c)
		i++;
	if (!s[i])
		return (NULL);
	return ((char *)s + i);
}
