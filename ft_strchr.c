/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:26:38 by namerei           #+#    #+#             */
/*   Updated: 2020/11/11 15:48:27 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s)
   	{
		if (*(char *)s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')	
		return ((char *)s);
	return (0);
	}

// int main (void)
// {    
// 	const char *s = "hellllrooo";
// 	char c = 'r';	
// 	char *my = ft_strchr(s, c);
// 	char *std = strchr(s, c);
// 	printf("my:%s\n", my);
// 	printf("orig:%s\n", std);
//    return 0;
// }
