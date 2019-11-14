/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 02:26:45 by rcorenti          #+#    #+#             */
/*   Updated: 2019/11/14 22:03:34 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrwrd(const char *s, char c)
{
	size_t	i;
	size_t	nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			nbr++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (nbr);
}

static char		*ft_memstr(const char *s, size_t n)
{
	char	*str;
	size_t	i;

	str = NULL;
	i = 0;
	if (!(str = malloc(sizeof(char) * n + 1)))
		return (NULL);
	while (s[i] && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[n] = '\0';
	return (str);
}

char			**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**tab;

	i = 0;
	k = 0;
	tab = NULL;
	if (!(tab = malloc(sizeof(char *) * ft_nbrwrd(s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			if ((tab[k] = ft_memstr(s + j, i - j)) == NULL)
			{
				while (--k)
					free(tab[k]);
				free(tab[0]);
				free(tab);
				return (NULL);
			}
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}
