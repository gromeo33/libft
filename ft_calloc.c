/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giromeo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:59:36 by giromeo           #+#    #+#             */
/*   Updated: 2024/03/12 14:59:40 by giromeo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t b)
{
	void	*p;

	if (c && b && c > 4294967295 / b)
		return (NULL);
	p = malloc (c * b);
	if (p == NULL)
		return (p);
	ft_bzero(p, b * c);
	return (p);
}
