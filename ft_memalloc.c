/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:23:25 by ashanbha          #+#    #+#             */
/*   Updated: 2018/11/30 09:28:51 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*i;

	i = malloc(size);
	if (i == NULL)
		return (NULL);
	ft_bzero(i, size);
	return (i);
}
