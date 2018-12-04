/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:21:52 by ashanbha          #+#    #+#             */
/*   Updated: 2018/11/28 17:49:16 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	a;

	a = 0;
	while (src[a] != '\0' && a < len)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < len)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
