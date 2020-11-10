/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:39:55 by namerei           #+#    #+#             */
/*   Updated: 2020/11/09 16:41:20 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	if (n ==0)
		return (0);
	i = 0;
	while (*s1 == *s2 && --n && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	//return ((*(unsigned char *)s1 < *(unsigned char *)s2) ? -1 : +1);
	return ((*(unsigned char *)s1 - *(unsigned char *)s2));
}
// int	main(void)
// {
// 	printf("my%d\n", ft_strncmp("gall","gall",8));
// 	printf("orig%d\n", strncmp("gall","gall",8));
// }