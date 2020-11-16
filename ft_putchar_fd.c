#include "libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

// int main(void)
// {
//     int fd = open("file.txt", O_WRONLY); 
//     int fd1 = open("file1.txt", O_WRONLY); 
    
//     ft_putchar_fd('h', fd);
//     printf("%d\n",fd);
//     printf("%d\n",fd1);

//     close(fd);
// }