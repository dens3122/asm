/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btrsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:06:55 by jritchie          #+#    #+#             */
/*   Updated: 2018/12/04 14:05:20 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree	*ft_btrsearch(t_btree *root, void *item, int (*cmpf) (void *, void *))
{
	int		res;

	if (root && cmpf)
	{
		res = cmpf(root->item, item);
		if (res == 0)
			return (root);
		if (res < 0)
			if (root->right)
				return (ft_btrsearch(root->right, item, cmpf));
		if (res > 0)
			if (root->left)
				return (ft_btrsearch(root->left, item, cmpf));
	}
	return (NULL);
}
