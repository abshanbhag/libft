/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 08:33:01 by ashanbha          #+#    #+#             */
/*   Updated: 2018/11/30 12:46:24 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_tmp;
	char	*dst_tmp;
	size_t	i;

	if (src == dst)
		return (dst);
	src_tmp = (char *)src;
	dst_tmp = (char *)dst;
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			dst_tmp[i] = src_tmp[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst_tmp[i] = src_tmp[i];
			i++;
		}
	}
	return (dst);
}
