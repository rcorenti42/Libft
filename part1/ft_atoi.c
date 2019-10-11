/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:18:27 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/11 12:52:21 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
	int x;
	long neg;
	long nb;

	x = 0;
	neg = 0;
	nb = 0;
	while(str[x] == '+' || str[x] == '\t' || str[x] == '\v'
			|| str[x] == '\n' || str[x] == '\r' || str[x] == '\f'
			|| str[x] == '-' || str[x] == ' ')
	{
		if (str[x] == '-')
			neg = 2;
		x++;
	}
	while(str[x] >= '0' && str[x] <= '9')
	{
		if ((nb > ((9223372036854775807 / 10) - str[x]))
		|| (nb < ((-9223372036854775807 + 1) / 10) - str[x]))
		{
			if (neg != 2)
				return (-1);
			else
				return(0);
		}
		nb = nb * 10;
		nb = nb + str[x] - '0';
		x++;
	}
	if (!(neg == 2))
	{
		return((int)nb);
	}
	return((int)-nb);
}
