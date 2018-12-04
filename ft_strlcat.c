/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 08:50:04 by ashanbha          #+#    #+#             */
/*   Updated: 2018/11/28 17:44:11 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		b;
	size_t		dstlength;
	size_t		srclength;

	i = 0;
	b = 0;
	dstlength = ft_strlen(dst);
	srclength = ft_strlen(src);
	if (dstsize <= dstlength)
		return (srclength + dstsize);
	while ((dst[i] != '\0') && i < (dstsize - 1))
		i++;
	while (src[b] != '\0' && i < (dstsize - 1))
		dst[i++] = src[b++];
	dst[i] = '\0';
	return (dstlength + srclength);
}
