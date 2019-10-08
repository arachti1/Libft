/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:06:57 by larachti          #+#    #+#             */
/*   Updated: 2017/11/16 13:35:49 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*str1;
	char			*str2;

	if (!(src < dst && dst < (src + len)))
		return (ft_memcpy(dst, src, len));
	str1 = (char *)dst;
	str2 = (char *)src;
	while (len)
	{
		len--;
		str1[len] = str2[len];
	}
	return (dst);
}
