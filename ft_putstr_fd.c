#include "libft.h"
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
    if (s)
    {
        while(*s)
            ft_putchar_fd(*s++, fd);
    }
}

// int main(void)
// {
//     char *s = "hello world mfqzz!\n";
//     int fd = open("file.txt", O_WRONLY);
//     int fd1 = open("file1.txt", O_WRONLY); 
//     ft_putstr_fd(s, fd);
//     printf("%d\n",fd);
//     printf("%d\n",fd1);
//     close (fd);
//     close (fd1);
// }