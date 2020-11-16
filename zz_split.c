/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namerei <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 15:49:47 by namerei           #+#    #+#             */
/*   Updated: 2020/11/14 15:52:19 by namerei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
// #include "ft_substr.c"
// #include "ft_substr.c"
#include "ft_strtrim.c"


// char **q(char *s, int n,int len, char *cc)
// {
//     if (s == 0)
//         return (q)
//     q(s, n , len, cc)
//     ft_strtrim(s, n, len, cc)
//     char *s = ft_substr(s, n , len)
    
// }

int    ft_zzz(char *s, int c)
{
    static int count = 0;
    while(*s)
    {
        if ((*s != c && *(s + 1) == c) || (*s!= c && (*(s + 1) == '\0')))
			count++;
        s++;
    }
    return(count);
}

// size_t	ft_strlen_do_symb(const char *s, int c)
// {
// 	unsigned long  len;

// 	len = 0;
// 	while (s[len] != c)
// 		len++;
// 	return ((size_t) len);
// }

// /////////////////"    kak dela drug  "
// int     ft_q(char *s, int c)
// {
//     int i, k = 0;
//     while (*s)
//     {
//         if(i == 1 && *s == c)
//         {
//             i = 0;
//         }
//         if (i == 0 && *s != c)
//         {
//             i = 1;
//             k++;
//         }
//         s++;
//     }
//     return (k);
// }




// int    ft_count_words_do_symb(char *s, int c)
// {
//     int i = 0;
//     static int count = 0;
//     while(*s)
//     {
//         if ((s[i] == c && s[i+1] != c ))  //(s[i + 1] == c && s[i + 1] != c))
//         // || (s[i]) !== c && s[i + 1] )
//            {
//                i++;
//             count++;
//            }
//         i++;
//     }
//     return(i);
// }
char **ft_split(char const *s, char c)
{

    int i = 0;
    int count =0;
    char cc[1];
    cc[0] = c;
    int k = 0;
    int src_count;
    src_count = ft_zzz((char *)s, c);
    printf("str_count:%d\n", src_count);
    // cc[0] = c;
    // char *str = ft_strtrim(s,cc);

    char **q = (char **)malloc(sizeof(char *) * (src_count + 5));
    *(q + src_count) = NULL;
    if (q == NULL)
        return(0); //free function with q
    
    // q[0] = ft_strtrim(s,cc);
    // while (q[0][i])
    // {
    //     if (q[0][i] != c)
    //         i++;
    //     else
    //         count++;
    //         i++;
    // }

    // while(*s == c)
    //     s++;
    
    // printf("sss %s\n",s);
    while(s[k] && i < src_count)
    {
        if (s[k] != c) // schitaet stroki i zapisivaet slovo
        {
            // len = ft_strlen_do_symb(s, c);
                // q[i] = malloc(sizeof(char *) *len+ 1);
                while (s[k] != c) // schitaet dlinu slova simvoli
                {
                    count++;
                    k++;
                }
                q[i] = ft_substr(s , k -count, count);
                count = 0;
                // printf ("%s\n",q[i]);
                i++;
        }
        k++;
       
    }
    char *h = (char *)malloc(sizeof(int) * 10);
    h[0] = 'x';
    h[1] = 'x';
    h[2] = '\0';
    //  char *g = (char *)malloc(sizeof(int) * 10);

    // printf("count: %d\n", count);

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
    char *s = "a            a";
    char **z = ft_split(s, ' ');
    
    int str_counter = ft_zzz(s, ' ');
    // printf("str_counter:%d\n", str_counter);

///test pamati leaks ft_split
    while (1) 
        ;
    
    // while (*z)
    // {
        // printf("%s\n", *z);
        // z++;
    // }
    // printf("%s\n", z[0]);
    // printf("%s\n", z[1]);
    // printf("%s\n", z[2]);
    // printf("%s\n", z[3]);
    // printf("%s\n", z[4]);
    
    return (0);
}
