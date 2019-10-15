/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:55:32 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/11 12:55:33 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *str;
    unsigned long i;

    str = NULL;
    i = 0;
    if (!(str = malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    while (s[i])
    {
    	str[i] = (char)s[i];
    	i++;
    }
    str[i] = '\0';
    return (str);
}
