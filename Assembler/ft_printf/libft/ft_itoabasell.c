/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabasell.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jritchie <jritchie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 20:29:51 by jritchie          #+#    #+#             */
/*   Updated: 2019/01/25 20:29:53 by jritchie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_simbol(unsigned long long int a, unsigned long long int range)
{
	char	s;

	if ((a % range) == 5)
		s = '5';
	if ((a % range) == 6)
		s = '6';
	if ((a % range) == 7)
		s = '7';
	if ((a % range) == 8)
		s = '8';
	if ((a % range) == 9)
		s = '9';
	if ((a % range) == 10)
		s = 'A';
	if ((a % range) == 11)
		s = 'B';
	if ((a % range) == 12)
		s = 'C';
	if ((a % range) == 13)
		s = 'D';
	if ((a % range) == 14)
		s = 'E';
	if ((a % range) == 15)
		s = 'F';
	return (s);
}

static char	*ft_zapis(unsigned long long a, long long range, long long len)
{
	char			*s;
	long long		i;

	i = -1;
	if (!(s = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (++i < len)
	{
		if ((a % range) == 0)
			s[i] = '0';
		if ((a % range) == 1)
			s[i] = '1';
		if ((a % range) == 2)
			s[i] = '2';
		if ((a % range) == 3)
			s[i] = '3';
		if ((a % range) == 4)
			s[i] = '4';
		if ((a % range) > 4)
			s[i] = ft_simbol(a, range);
		a = a / range;
	}
	s[i] = 0;
	return (s);
}

static char	*ft_perezapis(char *s, long long len)
{
	char		*str;
	long long	i;

	i = 0;
	str = (char*)malloc(sizeof(char) * len + 1);
	while (len--)
	{
		str[i] = s[len];
		i++;
	}
	str[i] = 0;
	return (str);
}

char		*ft_itoabasell(unsigned long long int a, long long int range)
{
	char					*str;
	long long				len;
	unsigned long long		a1;

	len = 1;
	a1 = a;
	while ((a1 / range) != 0)
	{
		a1 = a1 / range;
		len++;
	}
	str = ft_perezapis(ft_zapis(a, range, len), len);
	return (str);
}
