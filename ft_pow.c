/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 20:22:46 by anonymous         #+#    #+#             */
/*   Updated: 2019/08/05 16:33:00 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long unsigned int		ft_pow(unsigned int base, int exp) {
	long long unsigned int		result;

	if (exp == 0)
		return (1);
	result = base;
	while (base && --exp)
		result *= base;
	return (result);
}