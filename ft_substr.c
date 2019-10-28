/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:23:20 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/26 15:26:21 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*newchain;
	size_t	x;
	int		temp;
	size_t	ssize;

	newchain = NULL;
	x = 0;
	ssize = 0;
	while (s[ssize])
		ssize++;
	if (start > ssize || s[ssize])
		return (NULL);
	if (len <= ssize - start)
		temp = (int)len + 1;
	if (len > ssize - start)
		temp = (int)ssize - start;
	if (!(newchain = malloc(sizeof(char) * temp)))
		return (NULL);
	while (len > 0 && s[x + start])
	{
		newchain[x] = s[x + start];
		x++;
		len--;
	}
	newchain[x] = '\0';
	return (newchain);
}
