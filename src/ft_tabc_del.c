/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabc_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 12:39:45 by larachti          #+#    #+#             */
/*   Updated: 2018/04/04 14:19:40 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabc_del(char **tabc)
{
	size_t	i;

	i = 0;
	while (tabc[i])
		free(tabc[i++]);
	free(tabc);
}
