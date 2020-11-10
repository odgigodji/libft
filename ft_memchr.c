/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:18:51 by namerei           #+#    #+#             */
/*   Updated: 2020/11/04 14:29:56 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i); //equal:s + i
		i++;
	}
	return (NULL);
}

// int		main(void)
// {
// 	char a[] = "abcdefgh";
// 	char b[] = "abcdefgh";
// 	printf("my:\n\t%s\n", ft_memchr(a, 'd', n));
// 	printf("orig:\n\t%s\n", memchr(b, 'd', n));
	
//    return 0;
// }
