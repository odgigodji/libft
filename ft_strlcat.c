/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 22:16:14 by namerei           #+#    #+#             */
/*   Updated: 2020/11/08 18:08:38 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// //#include "ft_strlen.c"
// // #include "ft_strnlen.c"
// #include "ft_memcpy.c"
// #include "ft_strlcpy.c"
#include "libft.h"

// size_t	ft_strlcat1(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst,const char *src, size_t dstsize)
{
	size_t dst_len;

	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (ft_strlen(src) + dstsize);
	ft_strlcpy(dst + dst_len, src, dstsize - dst_len);// ft-strlcpy 
	return (dst_len + ft_strlen(src));
}

// size_t	ft_strlcat2(char *dst, const char *src, size_t dstsize)//tip
// {
// 	size_t dst_len;
// 	size_t len;

// 	dst_len = 0;
// 	while (dst[dst_len] && dst_len < dstsize)
// 		dst_len++;
// 	len = ft_strlen(src) + dst_len;	
// 	if (dst_len < dstsize) {
// 		while (dst_len < dstsize - 1 && *src) {
// 			dst[dst_len] = *src;
// 			dst_len++;
// 			src++;
// 		}
// 		dst[dst_len] = '\0';
// 	}
// 	return (len);
// }

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	const size_t src_len = ft_strlen(src);
// 	const size_t dst_len = ft_strnlen(dst, dstsize);

// 	if (dst_len == dstsize) 
// 		return (dstsize+src_len);
// 	if (src_len < dstsize-dst_len) 
// 		ft_memcpy(dst+dst_len, src, src_len+1);
// 	else 
// 	{
// 		ft_memcpy(dst+dst_len, src, dstsize-1);
// 		dst[dst_len+dstsize-1] = '\0';
// 	}
// 	return (dst_len + src_len);
// }

// int	main(void)
// {
// 	int n = 25;
// 	char dst[40] = "0123456789";
// 	char src[20] = "0123456789123456";
// 	char dst1[40]= "0123456789";
// 	char src1[20]= "0123456789123456";

// 	printf("orig:	   %lu,%s\n", strlcat(dst, src, n), dst);
// 	printf("my:  %lu,%s\n", ft_strlcat(dst1, src1, n), dst1);
// 	return (0);
// }


// size_t	ft_strlcat1(char *dst, const char *src, size_t dstsize)
// {
// 	size_t len;
// 	size_t dst_len;
// 	size_t i;

// 	len = 0;
// 	i = 0;
// 	if (!dst && !src)
// 		return (0);
// 	while (*dst)
// 	{
// 		dst++;
// 		len++;
// 	}
// 	while (*src || i < dstsize - ft_strlen(dst) - 1)
// 	{
// 		*(dst++) = *(src++);
// 		len++; 
// 		i++;
// 	}
// 	return (len);
// }

