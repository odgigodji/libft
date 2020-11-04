/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:25:10 by namerei           #+#    #+#             */
/*   Updated: 2020/11/02 22:42:52 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst,  const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if ((unsigned char)c == ((unsigned char *)src)[i])
			return (dst + i + 1);
		i++;
	}
	return (0);
}

int		main(void)
{
	char z[30] = "0123456789Zabcdefghjkl";
	char x[30] = "0123456789Zabcdefghjkl";
	memccpy(&z[2], &z[5], 90, 3*sizeof(char));
	//ft_memccpy(&x[2], &x[5], 90, 3* sizeof(char));
	printf("orig:%s\n", z);
	printf("my:  %s\n", x);
	return (0);
}
