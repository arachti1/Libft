/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:05:10 by larachti          #+#    #+#             */
/*   Updated: 2017/11/24 17:26:04 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				index;
	int				sign;
	unsigned long	tot;

	tot = 0;
	index = 0;
	sign = 1;
	while (str[index] == '\t' || str[index] == '\n' || str[index] == '\r'
		|| str[index] == '\v' || str[index] == '\f' || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -sign;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
		tot = (tot * 10) + (str[index++] - '0');
	return (tot * sign);
}
