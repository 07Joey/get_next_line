/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 10:12:57 by jngoma            #+#    #+#             */
/*   Updated: 2017/06/11 13:00:39 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	blanks(const char *str)
{
	int		i;

	i = 0;
	while ((str[i] == ' ' ||
		str[i] == '+' || str[i] == '\n' ||
		str[i] == '\t' || str[i] == '\v' ||
		str[i] == '\f' || str[i] == '\r') && (str[i] != '\0'))
		i++;
	return (i);
}

static int	overflow(const char *s)
{
	if (s[0] == '-')
		return (0);
	else
		return (-1);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	i = blanks(str);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
			break ;
		num = num * 10 + str[i] - '0';
		++i;
	}
	if (i > 19)
		return (overflow(str));
	return (num * sign);
}
