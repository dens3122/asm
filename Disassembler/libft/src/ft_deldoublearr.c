/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deldoublearr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 18:01:29 by jritchie          #+#    #+#             */
/*   Updated: 2019/03/06 21:23:40 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_deldoublearr(char ***res)
{
	int	i;

	if (!res || !(*res))
		return (0);
	i = -1;
	while ((*res)[++i])
		free((*res)[i]);
	free(*res);
	*res = NULL;
	return (0);
}
