/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:47:07 by larachti          #+#    #+#             */
/*   Updated: 2017/12/05 14:59:44 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static size_t		word_count(const char *str, char c)
{
	int		index;
	int		nb;

	index = 0;
	nb = 0;
	while (str[index])
	{
		if (str[index] != c && (str[index + 1] == c || str[index + 1] == '\0'))
			nb++;
		index++;
	}
	return (nb);
}

static size_t		word_len(char const *s, char c)
{
	size_t index;

	index = 0;
	while (s[index] != c && s[index] != '\0')
		index++;
	return (index);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t				index_mot;
	unsigned long		n_mot;
	char				**tab;

	n_mot = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char*) * (word_count(s, c) + 1))))
		return (NULL);
	while ((*s == c))
		s++;
	while (*s != '\0')
	{
		if (!(tab[n_mot] = (char *)malloc(sizeof(char) * (word_len(s, c) + 1))))
			return (NULL);
		index_mot = 0;
		while (word_len(s, c))
			tab[n_mot][index_mot++] = *s++;
		tab[n_mot][index_mot] = '\0';
		n_mot++;
		while (*s == c)
			s++;
	}
	tab[n_mot] = NULL;
	return (tab);
}
