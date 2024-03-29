/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_until.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 22:47:31 by jritchie          #+#    #+#             */
/*   Updated: 2019/01/30 22:51:36 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_until(char *s, char c)
{
	int	len;

	len = ft_strnchr(s, c, 1);
	if (len == -1)
		return (ft_putstr(s));
	else
		write(1, s, len);
	return (len);
}
