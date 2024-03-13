/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giromeo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:03:56 by giromeo           #+#    #+#             */
/*   Updated: 2024/03/12 15:04:06 by giromeo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennum(long num)
{
	int	strlen;

	strlen = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
	{
		strlen++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		strlen++;
	}
	return (strlen);
}

char	*ft_itoa(int n)
{
	int		lenstr;
	long	num;
	char	*str;

	num = n;
	lenstr = ft_lennum(num);
	str = (char *)malloc(sizeof(char) * (lenstr + 1));
	if (!str)
		return (NULL);
	*(str + lenstr--) = '\0';
	if (num == 0)
	{
		*(str + 0) = '0';
	}
	else if (num < 0)
	{
		num *= -1;
		*(str + 0) = '-';
	}
	while (num > 0)
	{
		*(str + lenstr--) = (48 + (num % 10));
		num /= 10;
	}
	return (str);
}
