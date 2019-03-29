/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:12:55 by larachti          #+#    #+#             */
/*   Updated: 2018/02/01 20:26:47 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <strings.h>
#include "libft.h"

char	*ft_strndup(const char *s, size_t len)
{
	char *new;

	new = ft_strnew(len + 1);
	ft_strncpy(new, s, len);
	new[len] = '\0';
	return (new);
}
