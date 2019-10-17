#include "libft.h"

int	ft_strncmp(const char *s1,const char *s2,size_t n)
{
	int		i;
	int		x;
	size_t	k;

	x = 0;
	k = n;
	if (k == 0)
		return (0);
	while(k != 0) 
	{
		if (s1[x] != s2[x])
		{
			i = (int)((unsigned char)s1[x] - (unsigned char)s2[x]);
			if (i < 0)
				return (-1);
			if (i > 0)
				return (1);
			return (0);
		}
		k--;
		x++;
	}
	return (0);
}