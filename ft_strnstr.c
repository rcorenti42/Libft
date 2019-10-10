#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    size_t pos;
    int i;

    pos = 0;
    if (!*s2)
        return ((char *)s1);
    while (s1[pos] != '\0' && pos < len)
    {
        if (s1[pos] == s2[0])
        {
            i = 1;
            while (s2[i] != '\0' && s1[pos + i] == s2[i] && (pos + i) < len)
                i++;
            if (s2[i] == '\0')
                return ((char *)&s1[pos]);
        }
        pos++;
    }
    return (NULL);
}
