/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:52:39 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/11 12:52:56 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *v;

    v = NULL;
    if (nmemb == 0 || size == 0)
    {
        nmemb = 1;
        size = 1;
    }
    v = malloc(nmemb * size);
    ft_bzero(v, size);
    return (v);
}
