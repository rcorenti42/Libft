/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:55:13 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/11 12:55:14 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char i;

    i = c;
    while (*s != '\0')
    {
        if (*s == i)
            return ((char *)s);
        s++;
    }
    if (i == '\0')
        return ((char *)s);
    return (NULL);
}
