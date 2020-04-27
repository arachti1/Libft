/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:34:25 by larachti          #+#    #+#             */
/*   Updated: 2017/11/22 12:50:24 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long	index;
	unsigned char	*a;
	unsigned char	*b;

	if (n == 0)
		return (0);
	index = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (index < n && a[index] == b[index])
		index++;
	if (index == n)
		index--;
	return (a[index] - b[index]);
}
