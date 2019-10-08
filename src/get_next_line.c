/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 11:55:55 by larachti          #+#    #+#             */
/*   Updated: 2018/04/10 15:00:00 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t			ft_check_for_nl(char *s)
{
	size_t		index;

	index = 0;
	while (s[index] && s[index] != '\n')
		index++;
	return (index);
}

int				ft_check_stock(char **stock, char **line)
{
	char	*tmp;

	if (*stock)
	{
		tmp = ft_strdup(*stock);
		ft_strdel(stock);
		*line = ft_strndup(tmp, ft_check_for_nl(tmp));
		if (ft_check_for_nl(tmp) < ft_strlen(tmp))
		{
			*stock = ft_strdup(tmp + ft_check_for_nl(tmp) + 1);
			ft_strdel(&tmp);
			return (1);
		}
		ft_strdel(&tmp);
	}
	return (0);
}

int				ft_fill_next_line(int fd, char **stock, char **line)
{
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	ft_bzero(buf, BUFF_SIZE + 1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (!*line)
			*line = ft_strndup(buf, ft_check_for_nl(buf));
		else
		{
			tmp = ft_strjoin(*line, buf);
			ft_strdel(line);
			*line = ft_strndup(tmp, ft_check_for_nl(tmp));
			ft_strdel(&tmp);
		}
		if (ft_check_for_nl(buf) < ft_strlen(buf))
		{
			*stock = ft_strdup(buf + ft_check_for_nl(buf) + 1);
			return (1);
		}
		ft_bzero(buf, BUFF_SIZE + 1);
	}
	return (ret);
}

int				get_next_line(const int fd, char **line)
{
	static char		*stock;
	int				ret;

	if (fd < 0)
		return (-1);
	if (line && *line)
		*line = NULL;
	if (ft_check_stock(&stock, line) == 1)
		return (1);
	ret = ft_fill_next_line(fd, &stock, line);
	if (ret == 0 && *line && ft_strcmp(*line, "\0"))
		ret = 1;
	return (ret);
}
