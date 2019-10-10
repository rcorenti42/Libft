#include "libft.h"
//inclure stdlib.h

char    *ft_strchr(const char *s, int c)
{
    char i;

    i = c;
    while (*s != '\0')
    {
        if (*s == i)
            return ((char *)s);
        s++;
    }
    if (i == '\0')
        return ((char *)s);
    return (NULL);
}
