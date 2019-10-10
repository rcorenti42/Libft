#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t k;
	size_t m;
	size_t i;
	size_t j;

	if (size == 0)
		return (ft_strlen(src));
	k = ft_strlen(src);
	m = 0;
	while (*dst && size > 0)
	{
		dst++;
		size--;
		m++;
	}
	i = ft_strlen((const char *)dst);
	j = 0;
	while (src[j] && j < (size - 1))
    {
        dst[i + j] = (char *)src[j];
        j++;
    }
    dst[i + j] = '\0';
	if (size == 1 || *src == 0)
		*dst = '\0';
	return (k + m);
}`
