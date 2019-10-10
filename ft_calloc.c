void    *ft_calloc(size_t nmemb, size_t size)
{
    void *v;

    if (nmemb == 0 || size == 0)
        nmemb = size = 1;
    v = malloc(nmemb * size);
    ft_bzero(v);
    return (v);
}
