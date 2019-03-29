/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 21:56:18 by larachti          #+#    #+#             */
/*   Updated: 2017/11/13 14:40:53 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		index;

	if ((dup = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1)) == NULL)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		dup[index] = s1[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}
