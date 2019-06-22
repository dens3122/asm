/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:21:30 by jritchie          #+#    #+#             */
/*   Updated: 2018/11/26 14:02:51 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;

	if (size == 0)
		return (NULL);
	new = (void *)malloc(size);
	if (!new)
		return (NULL);
	while (size > 0)
	{
		((char *)new)[size - 1] = 0;
		size--;
	}
	return (new);
}
