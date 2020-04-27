/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:48:12 by larachti          #+#    #+#             */
/*   Updated: 2019/11/29 19:05:10 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_itab		*ft_itabnew(int size)
{
	t_itab	*itab;

	if (size && (itab = (t_itab *)malloc(sizeof(t_itab)))
		&& (itab->size = size) && (itab->t = malloc(sizeof(int) * size)))
	{
		ft_bzero(itab->t, sizeof(itab->t));
		return (itab);
	}
	return (NULL);
}

t_itab		*ft_itabdup(t_itab *ta)
{
	t_itab	*tb;
	int		i;

	tb = ft_itabnew(ta->size);
	i = 0;
	while (i < ta->size)
		tb->t[i] = ta->t[i++];
	return (tb);
}
