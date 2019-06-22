/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:30:55 by jritchie          #+#    #+#             */
/*   Updated: 2018/12/14 20:44:57 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list *temp;

	while (alst && del && *alst)
	{
		temp = *alst;
		*alst = (*alst)->next;
		free(temp);
	}
	if (alst)
		*alst = NULL;
}
