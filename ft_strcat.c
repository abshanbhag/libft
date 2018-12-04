/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:07:51 by ashanbha          #+#    #+#             */
/*   Updated: 2018/11/28 17:43:40 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[b] != '\0')
		s1[i++] = s2[b++];
	s1[i] = '\0';
	return (s1);
}
