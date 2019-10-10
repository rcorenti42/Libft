char    *ft_strdup(const char *s)
{
    char    *str;
    unsigned long i;

    i = 0;
    str = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (str == NULL)
        return (NULL);
    str = (char *)s;
    str[i] = '\0';
    return (str);
}
