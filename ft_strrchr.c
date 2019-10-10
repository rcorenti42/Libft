#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char *save;
    char i;

    save = NULL;
    i = c;
    while (*s != '\0')
    {
        if (*s == i)
            save = (char *)s;
        s++;
    }
    return (save);
}
