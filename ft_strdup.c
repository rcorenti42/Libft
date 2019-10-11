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

    i = 0;
    str = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (str == NULL)
        return (NULL);
    str = (char *)s;
    str[i] = '\0';
    return (str);
}
