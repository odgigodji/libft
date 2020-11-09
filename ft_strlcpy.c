/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:35:37 by namerei           #+#    #+#             */
/*   Updated: 2020/11/08 19:15:29 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;	
	size_t	src_len;
					
	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((src_len < dstsize) ? i : src_len);
}

int		main(void)
{
	int	 n = 2;
	char dst[40] = "0123456789";
	char src[20] = "a0b1v2d3e4f5";
	char dst1[40] = "0123456789";
	char src1[20] = "a0b1v2d3e4f5";

	char *d = &dst[0];
	char *s = &src[0];
	
	printf("origlen:%lu, %s\n", strlcpy(dst, "abcdefg", n), dst);
	printf("my len:	%lu, %s\n", ft_strlcpy(dst1, "abcdefg", n), dst1);
	return (0); 
}

