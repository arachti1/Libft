/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnapp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:56:27 by larachti          #+#    #+#             */
/*   Updated: 2019/10/02 17:54:16 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strnapp(char **str, char c, size_t len)
{
	char	*app;

	app = ft_strnew(len);
	ft_memset(app, c, len);
	ft_strapp(str, app);
	free(app);
	return (ft_strlen(*str));
}
