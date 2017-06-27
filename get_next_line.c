/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 07:36:13 by jngoma            #+#    #+#             */
/*   Updated: 2017/06/25 12:16:23 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		read_to_stock(int const fd, char **stock)
{
	char	*buff;
	char	*tmp;
	int		val;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	val = read(fd, buff, BUFF_SIZE);
	if (val > 0)
	{
		buff[val] = '\0';
		tmp = ft_strjoin(*stock, buff);
		free(*stock);
		*stock = tmp;
	}
	free(buff);
	return (val);
}

int				get_next_line(int const fd, char **line)
{
	static char	*stock = NULL;
	char		*bin;
	int			val;

	if ((!stock && (stock = (char *)malloc(sizeof(*stock))) == NULL)
			|| !line || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	bin = ft_strchr(stock, '\n');
	while (bin == NULL)
	{
		val = read_to_stock(fd, &stock);
		if (val == 0)
		{
			if (ft_strlen(stock) == 0)
				return (0);
			stock = ft_strjoin(stock, "\n");
		}
		if (val < 0)
			return (-1);
		else
			bin = ft_strchr(stock, '\n');
	}
	*line = ft_strsub(stock, 0, ft_strlen(stock) - ft_strlen(bin));
	stock = ft_strdup(bin + 1);
	return (1);
}
