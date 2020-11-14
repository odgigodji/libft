/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 23:06:24 by namerei           #+#    #+#             */
/*   Updated: 2020/11/11 16:35:19 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "ft_strlen.c"
#include <stdio.h>
#include <string.h>
		// #include "libft.h"

size_t	ft_issymb(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	size_t i;

	start = 0;
	i = 0;
	// if (set == NULL && s1 == NULL)
	// 	return 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && end != start)// && ft_issymb(set, s1[start]) == 0)
	{
		if (ft_issymb(set, s1[start]))
		{
			// printf("%c",s1[start]);
			start++;
		}	
		else 
			break;
	}
	// printf("\n");
	while (s1[end])
	{
		if (ft_issymb(set, s1[end]) && end != start)
		{
			// printf("%c",s1[end]);
			end--;
		}
		else
			break;
	}
	// printf("\n");
			// printf("start:%zu\n",start);
			// printf("end:%zu\n",end);
	char *res = (char *)malloc(end - start);
	if (res == NULL)
		return (res);
	while (start < end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	res[i] = '\0';
	// printf ("%s\n", res);
	return (res);
}

int	main(void)
{
	// char *z = "";
	// char *x = "";
	
	// char *res = ft_strtrim(z,x);
	// // while (1)
	// // 	;
	// printf("%s", res);
 

	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = " \n\t";
	char *ret = ft_strtrim(s1, s2);
	printf("res%s\n",ret);

	if (!strcmp(ret, s2))
	{
		printf("TEST_SUCCESS\n");
		return (0);
	}
	printf("TEST_FAILED\n");
	return 0;
}
