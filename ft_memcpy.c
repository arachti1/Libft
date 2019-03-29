/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:26:49 by larachti          #+#    #+#             */
/*   Updated: 2017/11/16 09:59:34 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	index;
	char			*str1;
	char			*str2;

	index = 0;
	str1 = (char *)dst;
	str2 = (char *)src;
	while (index < n)
	{
		str1[index] = str2[index];
		index++;
	}
	return (dst);
}
