/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:58:41 by larachti          #+#    #+#             */
/*   Updated: 2017/11/23 17:55:22 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int index;

	index = 0;
	if (src == NULL)
		dst[index] = '\0';
	while (src[index] && index < len)
	{
		dst[index] = src[index];
		index++;
	}
	while (index < len)
		dst[index++] = '\0';
	return (dst);
}
