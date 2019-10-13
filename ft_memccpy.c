/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:23:49 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/11 15:26:12 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == s[i])
			return (dest);
		d[i] = s[i];
		dest++;
		i++;
	}
	return (NULL);
}