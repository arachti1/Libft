/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnprep.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:56:27 by larachti          #+#    #+#             */
/*   Updated: 2019/09/14 02:43:07 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strnprep(char **str, char c, size_t len) {
	char *prep;

	prep = ft_strnew(len);
	ft_memset(prep, c, len);
	ft_strprep(str, prep);
	free(prep);
	return (ft_strlen(*str));
}