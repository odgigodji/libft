/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 20:19:12 by namerei           #+#    #+#             */
/*   Updated: 2020/11/07 00:25:31 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memcpy.c"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	if (dst < src)
		return ((unsigned char*)ft_memcpy(dst, src, len));
	while (len--)
		((unsigned char*)dst)[len] = ((unsigned char *)src)[len];
	return (dst);
}	

int		main(void)
{
	char src[20] = "1234567890";	
	char src1[20] = "1234567890";	
	printf ("src old: %s\n", src);
	printf("my%s\n", ft_memmove(src, src + 5, 7));
	printf("orig%s\n", memmove(src1, src1 + 5, 7));
	return (0);
}	
