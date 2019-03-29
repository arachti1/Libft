/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:37:48 by larachti          #+#    #+#             */
/*   Updated: 2017/11/16 09:59:22 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int index_hay;
	int	index_need;

	index_hay = 0;
	index_need = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[index_hay + index_need])
	{
		while (haystack[index_hay + index_need] == needle[index_need])
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
