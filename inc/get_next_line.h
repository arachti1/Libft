/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:56:07 by larachti          #+#    #+#             */
/*   Updated: 2019/03/31 17:47:07 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 10000

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

int				get_next_line(const int fd, char **line);

typedef struct	s_list_fd
{
	int					fd;
	char				*stock;
	struct s_list_fd	*next;
}				t_list_fd;

#endif
