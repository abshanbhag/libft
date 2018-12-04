/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:13:13 by ashanbha          #+#    #+#             */
/*   Updated: 2018/11/27 15:34:36 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		a;
	int		slen;
	char	*copy;

	slen = 0;
	while (s1[slen])
		slen++;
	copy = (char*)malloc(slen + 1);
	if (copy != NULL)
	{
		a = 0;
		while (s1[a])
		{
			copy[a] = s1[a];
			a++;
		}
		copy[a] = '\0';
	}
	return (copy);
}
