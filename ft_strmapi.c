#include "libft.h"

char fq(unsigned int i, char c)
{
    return(c + i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    // len = ft
    if((s == NULL) || (!(str = malloc(ft_strlen(s) +1))))
    //if (str == NULL)
        return (NULL);
    int i = 0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++; 
    }
    str[i] = '\0';
    return (str);
}

// int main(void)
// {
//     char *str = "00000";
//     char *res = ft_strmapi(str, &fq);
//     printf("%s\n", res);
// }