/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giromeo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:36:19 by giromeo           #+#    #+#             */
/*   Updated: 2024/03/12 15:36:22 by giromeo          ###   ########.fr       */
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
