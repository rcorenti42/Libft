//#include "libft.h"
#include <string.h>
size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (!src || !dst)
        return (0);
    while (src[i] != '\0' && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (strlen(src));
}


#include <stdio.h>
int main(void)
{
    char *dst = "jkl;kljkljgfdh";
    const char *src = "dfjhyukkyk";
    size_t size = 4;
    printf("ft_strlcpy : %d", ft_strlcpy(dst, src, size));
    return (0);
}
