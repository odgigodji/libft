#include "libft.h"

// void ft_putnbr_fd(int nb, int fd)
// {
    
// }

void	q(int nb, int fd)
{
	char a;

	if (!nb)
		return ;
	q(nb / 10, fd);
	a = nb % 10 + '0';
	write(fd, &a, 1);
}

void ft_putnbr_fd(int nb, int fd)
{

    if (nb == 0 || nb == -2147483648)
    {
        write(fd, (nb == 0) ? "0" : "-2147483648", (nb == 0) ? 1 : 11);
        return;
    }
	if (nb < 0)
	{
        write(fd, "-", 1);
        nb = -nb;
	}
	q(nb, fd);
}

// int main(int argc, char **argv)
// {
// 	int nb = -2147483648;
// 	ft_putnbr(nb);
// 	return 0;
// }

// int main(void)
// {
//     int nb = 0;
//     int fd = open("file.txt", O_WRONLY);
//     int fd1 = open("file1.txt", O_WRONLY); 
//     ft_putnbr_fd(nb, fd1);
//     printf("%d\n",fd);
//     printf("%d\n",fd1);
//     close (fd);
//     close (fd1);
// }