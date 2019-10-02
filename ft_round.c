/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:44:05 by anonymous         #+#    #+#             */
/*   Updated: 2019/10/02 17:53:40 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int			ft_round(double a)
{
	long long int		sign;

	sign = (a >= 0) ? 1 : -1;
	a *= sign;
	if (a - (long long int)a >= 0.5)
		a += 1;
	return (sign * (long long int)a);
}
