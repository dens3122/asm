/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btrin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:18:45 by jritchie          #+#    #+#             */
/*   Updated: 2018/12/11 16:43:09 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btrin(t_btree *root)
{
	if (root)
	{
		ft_btrin(root->left);
		ft_putstr(root->item);
		ft_btrin(root->right);
	}
}
