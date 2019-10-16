/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 00:47:47 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/16 00:48:02 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*save;
	char	i;

	save = NULL;
	i = c;
	while (*s != '\0')
	{
		if (*s == i)
			save = (char *)s;
		s++;
	}
	return (save);
}
