/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:27:39 by namerei           #+#    #+#             */
/*   Updated: 2020/11/08 14:55:41 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include "ft_strlen.c"
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (len >= 0)
   	{
		if ((char)s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	// if ((char)c == '\0')
	// 	return ((char *)&s[len]);
	return (0);
	}

// int main (void)
// { 
// 	//----check anton
// 	const char *s = "abbbbbb";
// char c = 'a';	
// 	char *my = ft_strrchr(s, c);
// 	char *std = strrchr(s, c);
// 	char *std1 = strchr(s, c);
// 	printf("my:%s\n", my);
// 	printf("orig:%s\n", std);
// 	printf("orig ch: %s\n", std1);

// 	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	char *d1 = strrchr(src, '\0');
// 	char *d2 = ft_strrchr(src, '\0');
// 	printf("my:%s\n", d2);
// 	printf("orig:%s\n", d1);
// 	if (d1 == d2) 
// 	{
// 		printf("ok");
// 		return 0;
// 	}
// 	printf("no");
//    return 0;
// }
