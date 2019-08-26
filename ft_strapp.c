/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strapp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 13:23:55 by larachti          #+#    #+#             */
/*   Updated: 2019/08/24 02:08:20 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strapp(char **str, char *app) {
	char		*tmp;

	tmp = str;
	*str = ft_strnew(ft_strlen(*str) + ft_strlen(app));
	*str = ft_strcat(*str, tmp);
	*str = ft_strcat(*str, app);
	free(tmp);
}
