/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:14:09 by larachti          #+#    #+#             */
/*   Updated: 2017/11/16 09:59:24 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *str;

	if ((str = (char *)malloc(size * sizeof(char) + 1)) == NULL)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}
