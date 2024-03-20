/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giromeo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:06:37 by giromeo           #+#    #+#             */
/*   Updated: 2024/03/12 15:06:40 by giromeo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*str1_buff;
	unsigned char	*str2_buff;

	str1_buff = (unsigned char *)str1;
	str2_buff = (unsigned char *)str2;
	if (!str1 && !str2)
		return (str1);
	if (str2 < str1)
		while (n--)
			str1_buff[n] = str2_buff[n];
	else
		while (n--)
			*str1_buff++ = *str2_buff++;
	return (str1);
}
