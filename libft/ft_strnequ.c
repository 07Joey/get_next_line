/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 07:46:01 by jngoma            #+#    #+#             */
/*   Updated: 2017/06/25 07:46:02 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t len)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && i < len)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}