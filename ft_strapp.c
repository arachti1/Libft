/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strapp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 13:23:55 by larachti          #+#    #+#             */
/*   Updated: 2019/08/26 23:02:24 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strapp(char **str, char *app) {
	char		*tmp;

	tmp = ft_strnew(ft_strlen(*str) + ft_strlen(app));
	tmp = ft_strcat(tmp, *str);
	tmp = ft_strcat(tmp, app);
	*str = tmp;
}
