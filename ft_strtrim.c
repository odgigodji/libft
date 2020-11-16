/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 15:48:26 by namerei           #+#    #+#             */
/*   Updated: 2020/11/13 15:48:37 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *res;
    size_t  len;

    if (!s1 || !set)
        return (NULL);
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    len = ft_strlen(s1);
    while (len && ft_strchr(set, s1[len]))
        len--;
    res = ft_substr(s1, 0, len + 1);
    return (res);
}

// int main(void)
// {
//     char *s1 = "../!asdfasd./!";
// 	char *s2 = "";
// 	char *ret = ft_strtrim(s1, "!./");
// 	printf("res%s\n",ret);

// 	if (!strcmp(ret, s2))
// 	{
// 		printf("TEST_SUCCESS\n");
// 		return (0);
// 	}
// 	printf("TEST_FAILED\n");
// 	return 0;
// }
