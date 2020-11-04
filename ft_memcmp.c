/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:44:37 by namerei           #+#    #+#             */
/*   Updated: 2020/11/03 22:49:58 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((n--) && *(unsigned char *)s1++ == *(unsigned char *)s2++)
		;
	return (*((unsigned char *)s1 - 1)  - *((unsigned char *)s2 - 1));
}

int	main()
{
	printf("orig:%d\n", memcmp("hella", "hellz", 5));
	printf("my:%d\n", ft_memcmp("hella", "hellz", 5));
}
