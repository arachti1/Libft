/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 20:22:46 by anonymous         #+#    #+#             */
/*   Updated: 2019/07/30 20:16:18 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_pow(int base, int exp) {
	long long int	result;

	result = base;
	if (exp == 0)
		return (1);
	while (base && --exp)
		result *= base;
	return (result);
}