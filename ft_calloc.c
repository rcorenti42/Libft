/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 02:39:20 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/16 03:11:15 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elements, size_t size)
{
	void	*place;

	place = NULL;
	if (elements == 0 || size == 0)
	{
		elements = 1;
		size = 1;
	}
	if (!(place = malloc(size * elements)))
		return (NULL);
	ft_bzero(place, elements * size);
	return (place);
}
