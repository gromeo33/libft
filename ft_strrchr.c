/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prove.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giromeo <giromeo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:36:42 by giromeo           #+#    #+#             */
/*   Updated: 2024/02/20 19:15:16 by giromeo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	const char	*buffer;

	i = ft_strlen(s);
	buffer = (s + i);
	while (i >= 0)
	{
		if (*buffer == c)
			return ((char *)buffer);
		buffer--;
		i--;
	}
	if (c == '\0')
		return ((char *)buffer);
	return (0);
}
