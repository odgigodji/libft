/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 15:49:47 by namerei           #+#    #+#             */
/*   Updated: 2020/11/13 15:51:07 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include "libft.h"
#include "ft_strtrim.c"

// char **q(char *s, int n,int len, char *cc)
// {
//     if (s == 0)
//         return (q)
//     q(s, n , len, cc)
//     ft_strtrim(s, n, len, cc)
//     char *s = ft_substr(s, n , len)
    
// }

size_t	ft_strlen_do_symb(const char *s, int c)
{
	unsigned long  len;

	len = 0;
	while (s[len] != c)
		len++;
	return ((size_t) len);
}

int    ft_count_words_do_symb(char *s, int c)
{
    int in = 0;
    int count = 0;
    while(*s)
    {
        if (*s == c)
            ;
        else if (*s != c)    
            count++;
        s++;        

}
    return(count);
}
char **ft_split(char const *s, char c)
{

    int i = 0;
    int count =0;
    char cc[1];
    cc[0] = c;
    // cc[0] = c;
    // char *str = ft_strtrim(s,cc);
    char **q = (char **)malloc(sizeof(char **) * 5);
    if (q == NULL)
        return(0); //free function with q
    q[0] = ft_strtrim(s,cc);
    // while (q[0][i])
    // {
    //     if (q[0][i] != c)
    //         i++;
    //     else
    //         count++;
    //         i++;
    // }

    while(*s == c)
        s++;
    
    printf("sss %s\n",s);
    while(*s)
    {
        if (*s != c)
            while(**q = malloc(sizeof(char *) * ft_strlen_do_symb(s, c))) {
                **q = *s;
            }
        s++;
        q++;
    }
    printf("count %d\n", count);

    // char **x = NULL;

    // i = 0;
    // while(*s == c)
    //     s++;
    // while(*s)
    // {
    //     if(ft_strchr(s,c))
    //     {
    //         x[i] = ft_substr(s, 0, 5);
    //     }
    //     s++;
    //     i++;
    // }
    return (q);
}

int main(void)
{
    char **z = ft_split("   Darov kak dela  ? 123 ", ' ');
    int i = 0;

    printf("%s\n", z[0]);
    // printf("%s\n", z[1]);
    return (0);
}
  