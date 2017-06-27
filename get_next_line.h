/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 07:41:20 by jngoma            #+#    #+#             */
/*   Updated: 2017/06/25 11:44:27 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"

int	get_next_line(const int fd, char **line);

#endif
