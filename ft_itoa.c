/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:45:34 by larachti          #+#    #+#             */
/*   Updated: 2017/11/16 15:56:04 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static int		ft_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		index;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	index = ft_len(n);
	if (!(str = (char *)malloc(sizeof(char) * index + 1)))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[index--] = '\0';
	while (n > 0)
	{
		str[index--] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
