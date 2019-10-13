#include "libft.h"

char		*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	str = NULL;
	i = 0;
	k = 0;
	while (ft_setcmp(s1[i], set) == 1)
		i++;
	if (s1[i] == '\0')
		return (NULL);
	j = ft_strlen(s1) - 1;
	while (ft_setcmp(s1[j], set) == 1)
		j--;
	if (!(str = malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	while (k < j - i + 1)
	{
		str[k] = s1[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

static size_t	ft_setcmp(const char c, const char *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(set);
	j = 0;
	while (i > 0 && j == 0)
	{
		if (set[i] == c)
			j++;
		i--;
	}
	if (j == 0)
		return (0);
	return (1);
}
