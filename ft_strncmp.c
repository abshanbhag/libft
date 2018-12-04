/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:56:56 by ashanbha          #+#    #+#             */
/*   Updated: 2018/11/30 12:09:39 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n && s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
		a++;
	if (a == n)
		return (0);
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
