/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:49:31 by larachti          #+#    #+#             */
/*   Updated: 2017/11/24 18:19:03 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	index;
	unsigned int	index2;

	if (!s1 || !s2)
		return (NULL);
	index = ft_strlen(s1) + ft_strlen(s2);
	index2 = 0;
	if (!(str = (char *)malloc(index * sizeof(char) + 1)))
		return (NULL);
	index = 0;
	while (s1[index])
		str[index2++] = s1[index++];
	index = 0;
	while (s2[index])
		str[index2++] = s2[index++];
	str[index2] = '\0';
	return (str);
}
