/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:00:46 by larachti          #+#    #+#             */
/*   Updated: 2019/03/31 17:07:41 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <strings.h>

char		*ft_strcut(char *s, size_t len)
{
	if (len > ft_strlen(s))
		return (NULL);
	return (ft_strdup(&s[len]));
}
