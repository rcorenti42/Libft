/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:49:33 by rcorenti          #+#    #+#             */
/*   Updated: 2019/10/11 20:03:51 by rcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	size;

	str = NULL;
	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
	{
		
		i++;
	}
	return (str);
}
