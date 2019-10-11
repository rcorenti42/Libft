/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:54:34 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/11 17:54:01 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t		i;
    unsigned char	*d;
    unsigned char	*s;

    i = 0;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    while (i < n)
    {
	d[i] = s[i];
	i++;
    }
    return (dest);
}
