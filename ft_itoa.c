#include "libft.h"

static int ft_numlen(int n)
{
    int count = 0;
    if (n <= 0)
    {
        // n = -n;
        count++;
    }
    while (n != 0)
    {
        n /=  10;
        count++;
    }
    return (count);
}

char *ft_strrev(char *s) // hello
{
    int start = 0;
    int end = ft_strlen(s) -1;
    char tmp =0;
    int len = end;

    while (start != (len/2) + 1)
    {
        tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;
        start++;
        end--;
    }
    return (s);
}

// static char *ft_strrev(char *s);




// void itoa (int n, char s[])
// {
//     int i, sign;
//     if ((sign = n) < 0) /* сохраняем знак */
//         n = -n; /* делаем n положительным */
//     i = 0;
//     do { /* генерируем цифры в обратном порядке */
//         s[i++] = n % 10 + '0'; /* следующая цифра */
//     } while ((n /= 10) > 0); /* исключить ее */
//     if (sign < 0)
//         s[i++] = '-';
//     s[i] = '\0';
// }






char *ft_itoa(int nb) //12345
{
    long n = (long)nb;
    int count_d = ft_numlen(n);//ft_count_dgti(n);
    // char *res = (char *)((n < 0) ? malloc(count_d + 2) : malloc(count_d +1));

    // printf("%d\n", count_d);
    char *res = (char *)malloc(count_d +1);
    if (res == NULL)
        return (NULL);
 
    //     res = "-2147483648";
    //     return(res);
    // }

    res[count_d] = '\0';
    int i = 0;
    if (n < 0)
    {
        n = -n;
        res[count_d - 1] = '-';
    }
    if (n == 0)
        res[i] = '0';
    while (n > 0)
    {
        res[i] = n%10 + '0';
        // printf("%c\n",res[i]);
        n = n/10;
        i++;
    }
    // printf("%s\n", res);
    return (ft_strrev(res));
}

// int    main()
// {

//     // while (1)
//     //     ;
//     //2147483647
//     //2147843647
//     char *z = ft_itoa(-2147483648 );
//     // printf("dlen:%d\n",ft_numlen(32325));
//     printf("%s",z);
//     return 0;
// }

