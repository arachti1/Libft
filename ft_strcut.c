/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 17:00:46 by larachti          #+#    #+#             */
/*   Updated: 2018/01/29 16:17:54 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

char		*ft_strcut(char *s, size_t len)
{
	if (len > ft_strlen(s))
		return (NULL);
	return (ft_strdup(&s[len]));
}
