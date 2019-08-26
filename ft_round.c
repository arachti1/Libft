/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:44:05 by anonymous         #+#    #+#             */
/*   Updated: 2019/08/05 17:33:29 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int			ft_round(long double a) {
	long long int		sign;

	sign = (a >= 0) ? 1 : -1;
		if (sign * (a - (long long int)a) >= sign * 0.5)
		a += sign;
	return ((long long int)a);
}