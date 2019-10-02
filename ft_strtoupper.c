/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 23:43:54 by larachti          #+#    #+#             */
/*   Updated: 2019/10/02 18:07:48 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtoupper(char *s)
{
	size_t		index;

	index = 0;
	while (s[index])
	{
		s[index] = ft_toupper(s[index]);
		index++;
	}
	return (s);
}
