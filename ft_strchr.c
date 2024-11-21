/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oachbani <oachbani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:10:48 by oachbani          #+#    #+#             */
/*   Updated: 2024/11/06 10:16:12 by oachbani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	if (!str)
		return (NULL);
	i = -1;
	while (str[++i])
		if (str[i] == (char) c)
			return ((char *)&str[i]);
	if (str[i] == (char) c)
		return ((char *)&str[i]);
	return (NULL);
}