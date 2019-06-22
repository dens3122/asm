/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btrpre.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:16:16 by jritchie          #+#    #+#             */
/*   Updated: 2018/11/30 17:37:38 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btrpre(t_btree *root)
{
	if (root)
	{
		ft_putstr(root->item);
		ft_btrpre(root->left);
		ft_btrpre(root->right);
	}
}
