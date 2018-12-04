/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:08:05 by ashanbha          #+#    #+#             */
/*   Updated: 2018/11/29 13:52:06 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;
	char	*str;

	a = 0;
	str = (char*)s;
	while (a < n)
	{
		if ((unsigned char)str[a] == (unsigned char)c)
			return ((char*)s + a);
		a++;
	}
	return (NULL);
}
