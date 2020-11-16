

int     ft_q1(char *s, int c)
{
    int i, k;
    i = k = 0;

    while (*s)
    {
        if(i == 1 && *s == c)
        {
            i = 0;
        }
        if (i == 0 && *s != c)
        {
            i = 1;
            k++;
        }
        s++;
    }
    return (k);
}
static int	ft_q(char const *s, char c)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (*s)
	{
		if (i == 1 && *s == c)
			i = 0;
		if (i == 0 && *s != c)
		{
			i = 1;
			n++;
		}
		s++;
	}
	return (n);
}


static int	ft_count_str(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			if (s[i])
				count++;
		}
		if (s[i])
			i++;
	}
	return (count);
}

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




int main(void)
{
    char *s = "     1ji             2ygg     3sfs s4fdf        ";
    // char **z = ft_split(s, ' ');
    
    int str_counter = ft_zzz(s, ' ');

    printf("str_counter:%d\n", str_counter);
    return (0);
}
