#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char *newchain;
	size_t x;
	int temp;
	size_t ssize;

	x = 0;
	temp = 0;
	ssize = 0;
	while (s[ssize])
		ssize++;
	if(len == 0 || start > ssize || s[ssize])
		return (NULL);

	if (len <= ssize - start)
		temp = (int)len + 1;
	if (len > ssize - start)
		temp = (int)ssize - start;
	if (!(newchain = malloc(sizeof(char) * temp)))
		return (NULL);
	while(len > 0 && s[x + start])
	{
		newchain[x] = s[x + start - 1];
		x++;
		len--;
	}
	newchain[x + start] = '\0';
	return (newchain);
}

