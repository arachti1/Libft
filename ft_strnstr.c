/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:49:21 by larachti          #+#    #+#             */
/*   Updated: 2017/11/16 09:59:24 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int index_hay;
	unsigned int index_need;

	index_hay = 0;
	index_need = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[index_hay] && index_hay < len)
	{
		while (haystack[index_hay + index_need] == needle[index_need]
			&& index_need + index_hay < len)
		{
			if (needle[index_need + 1] == '\0')
				return ((char *)&haystack[index_hay]);
			index_need++;
		}
		index_hay++;
		index_need = 0;
	}
	return (NULL);
}
