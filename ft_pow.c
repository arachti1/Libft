/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 20:22:46 by anonymous         #+#    #+#             */
/*   Updated: 2019/07/13 20:34:42 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_pow(int base, int exp) {
	if (exp == 0)
		return (1);
	while (base && --exp)
		base *= base;
	return (base);
}