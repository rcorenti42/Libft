/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 06:42:45 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/16 06:48:18 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int		i;
	int		nbr;

	i = 0;
	nbr = n;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

static char	*ft_reverse(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j--;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		nbr;
	int		i;
	char	*str;

	nbr = n;
	i = 0;
	str = NULL;
	if (!(str = malloc(sizeof(char) * ft_count(n) + (n < 0 ? 2 : 1))))
		return (NULL);
	if (n == 0)
	{
		str[i] = '0';
		i++;
	}
	if (n == -2147483648)
	{
		str = "-2147483648\0";
		return (str);
	}
	if (n < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		str[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	return (ft_reverse(str));
}
