/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:17:55 by emtran            #+#    #+#             */
/*   Updated: 2021/11/17 14:32:07 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	ft_check(long int nb, unsigned int len, char *str)
{
	if (nb == 0)
	{
		str[0] = 48;
		return (*str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb != 0)
	{
		str[len] = 48 + (nb % 10);
		nb = nb / 10;
		len--;
	}
	return (*str);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	nb;

	nb = n;
	len = ft_nbrlen(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	str[len--] = '\0';
	ft_check(nb, len, str);
	return (str);
}
