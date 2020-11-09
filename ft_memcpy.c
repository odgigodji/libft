/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:25:10 by namerei           #+#    #+#             */
/*   Updated: 2020/11/06 22:32:14 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst,  const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (n--)
		*((unsigned char*)d++) = *((unsigned char *)s++);
	return (dst);
}

/*int		main(void)
{
	char a[20] = "";
	char dest[20] = "";
	char aa[20] = "";
	char ddest[20] = "";
	printf("cpy my:   %s\n", ft_memcpy(a + 1, a + 3, 6));
	printf("cpy orig: %s\n", memcpy(aa + 1, aa + 3, 6));
	return (0);
}*/
