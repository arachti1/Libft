/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:18:21 by larachti          #+#    #+#             */
/*   Updated: 2017/11/24 00:22:52 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *tmp;

	if (lst)
	{
		tmp = f(lst);
		new = tmp;
		while ((lst = lst->next))
		{
			tmp->next = f(lst);
			tmp = tmp->next;
		}
	}
	else
		new = NULL;
	return (new);
}
