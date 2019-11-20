/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:49:33 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/15 23:02:10 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	size;

	str = NULL;
	i = 0;
	j = 0;
	if (!(s1) || !(s2))
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		str[i] = (char)s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		str[i] = (char)s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
