/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:13:19 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/11 15:27:33 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	*str;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	while (i > n)
	{
		d[i] = str[i];
		i--;
	}
	return (dest);
}
