/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:54:39 by ashanbha          #+#    #+#             */
/*   Updated: 2018/11/29 08:54:20 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*str1;
	const char	*str2;

	i = 0;
	str1 = dst;
	str2 = src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
