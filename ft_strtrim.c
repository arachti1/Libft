/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:01:01 by larachti          #+#    #+#             */
/*   Updated: 2017/11/23 19:05:20 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static char		*ft_strtrim_part2(char const *s)
{
	int		start;
	int		stop;
	int		index;
	char	*str;

	index = 0;
	start = 0;
	while (s[start] == '\n' || s[start] == '\t' || s[start] == ' ')
		start++;
	stop = ft_strlen(s);
	while ((s[stop] == '\n' || s[stop] == '\t' || s[stop] == ' ' ||
		s[stop] == '\0') && stop > start)
		stop--;
	if (!(str = (char *)malloc((stop - start + 1) * sizeof(char))))
		return (NULL);
	while (start <= stop)
		str[index++] = s[start++];
	str[index] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s)
{
	if (s == NULL)
		return (NULL);
	return (ft_strtrim_part2(s));
}
