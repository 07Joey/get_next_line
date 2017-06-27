/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 15:00:14 by jngoma            #+#    #+#             */
/*   Updated: 2017/06/11 12:44:28 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s) - 1;
	while (s[i] == 32 || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[len - j] == 32 || s[len - j] == '\n' || s[len - j] == '\t')
		j++;
	if (i == 0 && j == 0)
	{
		str = ft_strdup(s);
		return (str);
	}
	if (i == len + 1)
	{
		str = "";
		return (str);
	}
	if (!(str = ft_strsub(s, i, len - j - i + 1)))
		return (NULL);
	return (str);
}
