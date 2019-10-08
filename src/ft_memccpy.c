/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:55:20 by larachti          #+#    #+#             */
/*   Updated: 2017/11/16 09:59:35 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	index;
	unsigned char	*s1;
	unsigned char	*s2;

	index = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (index < n)
	{
		s1[index] = s2[index];
		if (s2[index] == (unsigned char)c)
			return ((void *)&s1[index + 1]);
		index++;
	}
	return (NULL);
}
