/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 17:51:11 by larachti          #+#    #+#             */
/*   Updated: 2019/10/28 23:48:16 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	get_char(long long unsigned int value, int base)
{
	char	*str;

	str = HEX_CHAR;
	return (str[value % base]);
}

void	get_value(char *str, long long unsigned int value, int base, int *i)
{
	if (value >= base)
		get_value(str, value / base, base, i);
	str[(*i)] = get_char(value, base);
	(*i)++;
}

char	*ft_itoa_base(long long int value, int base)
{
	char		*result;
	int			sign;
	int			i;

	i = 0;
	if (base < 2 || base > 16 || !(result = ft_strnew(25)))
		return (NULL);
	sign = (base == 10 && value < 0) ? -1 : 1;
	get_value(result, value * sign, base, &i);
	if (sign < 0)
		ft_strprep(&result, "-");
	return (result);
}

char	*ft_utoa_base(long long unsigned int value, int base)
{
	char		*result;
	int			i;

	i = 0;
	if (base < 2 || base > 16 || !(result = ft_strnew(25)))
		return (NULL);
	get_value(result, value, base, &i);
	return (result);
}
