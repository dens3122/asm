/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copyuntil.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 21:29:51 by jritchie          #+#    #+#             */
/*   Updated: 2018/12/04 21:39:28 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_copyuntil(char *str, int c)
{
	char	*res;
	char	*symb;

	if (!str)
		return (NULL);
	symb = ft_strchr(str, c);
	if (!symb)
		return (NULL);
	res = ft_strnew(symb - str);
	if (!res)
		return (NULL);
	res = ft_strncpy(res, str, symb - str);
	return (res);
}
