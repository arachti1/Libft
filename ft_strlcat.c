/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:21:06 by larachti          #+#    #+#             */
/*   Updated: 2017/11/16 09:59:31 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int index;
	unsigned int index2;

	index = ft_strlen(dst);
	if (index > size)
		return (ft_strlen(src) + size);
	index2 = 0;
	while (index + index2 < size - 1 && src[index2])
	{
		dst[index + index2] = src[index2];
		index2++;
	}
	dst[index + index2] = '\0';
	return (index + ft_strlen(src));
}
