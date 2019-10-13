/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:54:53 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/11 15:30:14 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t		i;
    unsigned char	*str;

    i = 0;
    str = (unsigned char)s;
    while(i < n)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return (s);
}
