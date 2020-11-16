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

//#include <stdio.h>
#include "libft.h"
// #include "ft_substr.c"
// #include "ft_substr.c"
// #include "ft_strtrim.c"

int    ft_str_counter(char *s, int c)
{
    int count = 0;
    while(*s)
    {
        if ((*s != c && *(s + 1) == c) || (*s!= c && (*(s + 1) == '\0')))
			count++;
        s++;
    }
    return(count);
}

char **ft_free_str(char **res, int i)
{
    i--;
    while (res[i])
    {
        free(res[i]);
        i--;
    }
    free(res);
    return (res);
}

char **ft_split(char const *s, char c)
{
    int i = 0;
    int k = 0;
    int symb_count = 0;
    int str_count  = 0;
    int str_len    = 0;
    
    if (s == NULL)
        return (NULL);
    str_len = ft_strlen(s);
    str_count = ft_str_counter((char *)s, c);
    char **q = (char **)malloc(sizeof(char *) * (str_count + 1));
    // *(q + str_count) = NULL;
    if (q == NULL)
        return(0); //free function with q
    while(k < str_len && i < str_count)/*s[k] && */
    {
        if (s[k] != c) // schitaet stroki i zapisivaet slovo
        {
                while (s[k] != c && s[k]) // schitaet dlinu slova simvoli
                {
                    symb_count++;
                    k++;
                }
                q[i] = ft_substr(s , k - symb_count, symb_count);
                if (q[i] == NULL)
                    return(ft_free_str(q, i));
                symb_count = 0;
                i++;
        }
        k++;
    }
    q[i] = NULL;
    // char **d = (char **)malloc(sizeof(char *) * (str_count + 1));
    // *(d + str_count) = NULL;
    // free(d);
    return (q);
}


// int main(void)
// {
//     char *s = "lorem ipsum dolor sit amet, consectetur\
//     adipiscing elit. Sed non risus. Suspendisse hello";
//     char **z = ft_split(s, ' ');
    
//     int str_counter = ft_str_counter(s, ' ');
//     printf("str_counter:%d\n", str_counter);

//     // while (1) 
//     //     ;
    
//     while (*z)
//     {
//         printf("%s", *z);
//         z++;
//     }
//     // printf("%s\n", z[0]);
//     // printf("%s\n", z[1]);
//     // printf("%s\n", z[2]);
//     // printf("%s\n", z[3]);
//     // printf("%s\n", z[4]);
    
//     return (0);
// }
