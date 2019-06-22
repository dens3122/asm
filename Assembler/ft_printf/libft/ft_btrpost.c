/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btrpost.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:21:42 by jritchie          #+#    #+#             */
/*   Updated: 2018/12/11 16:43:30 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btrpost(t_btree *root)
{
	if (root)
	{
		ft_btrpost(root->left);
		ft_btrpost(root->right);
		ft_putstr(root->item);
	}
}
