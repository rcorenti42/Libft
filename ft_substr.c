/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:06:10 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/11 19:49:15 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s1, unsigned int start, size_t len)
{
	size_t		size;
	size_t		i;
	char		*str;
	unsigned int	k;

	size = ft_strlen(s1) - (size_t)start;
	i = 0;
	str = NULL;
	k = start;
	if (start <= 0 && len <= 0)
		return (NULL);
	if (size > len)
		size = len;
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
	{
		str[i] = s1[k];
		k++;
		i++;
	}
	return (str);
}
