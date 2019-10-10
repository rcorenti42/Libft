int ft_isprint(int c)
{
    if (c == 32)
        return (64);
    if (c > 47 && c < 58)
        return (4);
    if (c > 96 && c < 123)
        return (2);
    if (c > 64 && c < 91)
        return (1);
    if (c < 32 || c > 126)
        return (0);
    return (16);
}
