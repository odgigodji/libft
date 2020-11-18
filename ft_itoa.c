/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:39:42 by namerei           #+#    #+#             */
/*   Updated: 2020/11/18 19:54:39 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int		count;

	count = 0;
	if (n <= 0)
	{
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int nb)
{
	long	n;
	int		count_d;
	char	*res;
	int		i;

	i = 0;
	n = (long)nb;
	count_d = ft_numlen(n);
	res = (char *)malloc(count_d + 1);
	if (res == NULL)
		return (NULL);
	res[count_d] = '\0';
	if (n < 0)
	{
		n = -n;
		res[count_d - 1] = '-';
	}
	if (n == 0)
		res[i] = '0';
	while (n > 0)
	{
		res[i++] = n % 10 + '0';
		n = n / 10;
	}
	return (ft_strrev(res));
}
