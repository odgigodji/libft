// #include <stdio.h>
// #include <stdlib.h>
// #include "ft_isspace.c"
// #include "ft_strlen.c"
#include "libft.h"

int 	ft_atoi(const char *str)
{
	unsigned long 	i;
	unsigned long 	n;
	int				sign;
		
	i = 0;
	n = 0;
	sign = 1; 
	// while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v' )
	
	while (ft_isspace(str[i]))
		i++;
	if (str[i] ==  '-' || str[i] == '+')
	{
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))	
	{
		n = 10 * n + (str[i] - '0');
		i++;
	}
	if (i >= 19)
		return ((sign == -1) ? 0 : -1);
	return ((int)sign * n);
}

// int main()
// {
// 	char n[40] = "99999999999999999999999999999";
// 	int i1 = atoi(n);
// 	int i2 = ft_atoi(n);
// 	printf ("orig %d\n", atoi(n));
// 	printf ("my   %d\n", ft_atoi(n));
	
// }