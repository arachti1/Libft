/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb_to_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 13:01:50 by larachti          #+#    #+#             */
/*   Updated: 2018/03/30 14:40:40 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_rgba_to_int(unsigned char r, unsigned char g,
	unsigned char b, unsigned char a)
{
	return (((a & 0xFF) << 24) + ((r & 0xFF) << 16) +
		((g & 0xFF) << 8) + (b & 0xFF));
}
