/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 19:06:57 by larachti          #+#    #+#             */
/*   Updated: 2019/09/10 18:03:24 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtolower(char *s)
{
	size_t		index;

	index = 0;
	while (s[index])
	{
		s[index] = ft_tolower(s[index]);
		index++;
	}
	return (s);
}
