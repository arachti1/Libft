/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strprep.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 13:18:29 by larachti          #+#    #+#             */
/*   Updated: 2019/10/02 17:54:42 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strprep(char **str, char *prep)
{
	char		*tmp;

	tmp = ft_strnew(ft_strlen(*str) + ft_strlen(prep));
	tmp = ft_strcat(tmp, prep);
	tmp = ft_strcat(tmp, *str);
	free(*str);
	*str = tmp;
}
