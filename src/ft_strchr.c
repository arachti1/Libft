/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:39:00 by larachti          #+#    #+#             */
/*   Updated: 2017/11/24 17:21:07 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int index;

	index = 0;
	while (s[index] || s[index] == (char)c)
	{
		if (s[index] == (char)c)
			return ((char *)&s[index]);
		index++;
	}
	return (NULL);
}
