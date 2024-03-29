/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:59:03 by jritchie          #+#    #+#             */
/*   Updated: 2018/11/30 13:37:59 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	void	*temp;

	temp = memptr;
	while (num > 0)
	{
		*((unsigned char *)temp) = (unsigned char)val;
		temp++;
		num--;
	}
	return (memptr);
}
