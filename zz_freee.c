
char **ft_free_str(char **res, int i)
{
    while (res[--i])
        free(res[i]);
    free(res);
    return (res);
}

int main()
{
    char **a =
}