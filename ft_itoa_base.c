/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 17:51:11 by larachti          #+#    #+#             */
/*   Updated: 2019/10/02 17:52:56 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	get_char(long long value, int base)
{
	char	*str;

	str = "0123456789ABCDEF";
	return (str[value % base]);
}

void	get_value(char *str, long long value, int base, int *pos)
{
	if (value >= base)
		get_value(str, value / base, base, pos);
	str[*pos] = get_char(value, base);
	*pos += 1;
}

char	*ft_itoa_base(long long int value, int base)
{
	char			*result;
	int				i;
	long long int	tmp;

	i = 0;
	result = (char*)malloc(sizeof(char) * (25));
	while (i < 25)
		result[i++] = 0;
	if (base < 2 || base > 16)
		return (NULL);
	if (value < 0 && base == 10)
	{
		result[0] = '-';
		i = 1;
		tmp = value;
		tmp = -tmp;
	}
	else
	{
		i = 0;
		tmp = value;
	}
	get_value(result, tmp, base, &i);
	return (result);
}
