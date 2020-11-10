/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:06:12 by namerei           #+#    #+#             */
/*   Updated: 2020/11/03 23:22:28 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *x; 
	unsigned char z;

	x = (unsigned char*)b;
	z = (unsigned char)c;
	while (len > 0)
	{
		*x++ = c;
		len--;
	}
	return ((unsigned char*)b);
}

// int		main(void)
// {
// 	char a[20] = "\0\0\0";
// 	printf("orig %s\n", memset(a, 90, 5));
// 	printf("my %s\n", ft_memset(a, 90, 5));
// 	printf("sizeof char =%lu", sizeof(int *));
// }
