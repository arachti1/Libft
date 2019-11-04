/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 17:51:11 by larachti          #+#    #+#             */
/*   Updated: 2019/10/27 00:35:07 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	get_char(long long unsigned int value, int base)
{
	char	*str;

	str = "0123456789ABCDEF";
	return (str[value % base]);
}

void	get_value(char *str, long long unsigned int value, int base, int *pos)
{
	if (value >= base)
		get_value(str, value / base, base, pos);
	str[*pos] = get_char(value, base);
	*pos += 1;
}

char	*ft_utoa_base(long long unsigned int value, int base)
{
	char			*result;
	int				i;

	result = ft_strnew(25);
	if (base < 2 || base > 16)
		return (NULL);
	get_value(result, value, base, &i);
	return (result);
}
*/