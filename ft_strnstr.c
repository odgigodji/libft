/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:01:25 by namerei           #+#    #+#             */
/*   Updated: 2020/11/09 16:42:28 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include "ft_strlen.c"
// #include "ft_strncmp.c"
#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*big;
	size_t	i;
	size_t	lit_len;
	
	
	i = 0;
	big = (char *)haystack;
	lit_len = ft_strlen(needle);
	// if (len == 0 && lit_len == 0)
	// 	return (big);
	while (big[i] && i < len)
	{
		if (!ft_strncmp(&big[i], needle, lit_len) && i + lit_len <= len)
			return (&big[i]);
		i++;
	}
	return ((lit_len == 0 && len == 0) ? big : 0);
}

//char *ft_strnstr1(const char *s, const char *find, size_t slen)
//{
//	char c, sc;
//	size_t len;
//
//	if ((c = *find++) != '\0')
//   	{
//		len = strlen(find);
//		while (strncmp(s, find, len) != 0) 
//		{
//			while (sc != c)
//			{
//				if ((sc = *s++) == '\0' || slen-- < 1)
//					return (NULL);
//			} 
//			if (len > slen)
//				return (NULL);
//		} 
//		s--;
//	}
//	return ((char *)s);
//}
//

// int		main(void)
// {
// 	size_t n = 13;
// 	char haystack[] = "Hi my name is Johni";
// 	char *x = "";

// 	////char *z = strnstr(haystack, "nam", 14);
// 	//printf("little is:%s\n", haystack);
// 	//printf("orig:  %s\n", strnstr(haystack, x, n));	
// 	////printf("apple: %s\n", ft_strnstr1(haystack, x, n));	
// 	//printf("my:    %s\n", ft_strnstr(haystack, x, n));	
	
// 	printf("\nbig is: \"%s\"\nlittle: \"%s\"\nn: %zu\nRESULTS:\norig: %s\nmy :  %s\n",haystack, x, n,strnstr(haystack, x ,n), ft_strnstr(haystack, x, n));
// 	return (0);
// }
