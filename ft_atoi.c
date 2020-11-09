#include <stdio.h>
#include <stdlib.h>
#include "ft_isspace.c"

int 	ft_atoi(const char *str)
{
	unsigned long 	i;
	unsigned long 	n;
	int				sign;
		
	i = 0;
	n = 0;
	sign = 1; 
	//while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v' )
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
	return ((int)sign * n);
}