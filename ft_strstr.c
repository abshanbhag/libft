/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 10:13:34 by ashanbha          #+#    #+#             */
/*   Updated: 2018/11/27 11:06:26 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int a;
	int b;
	int c;

	a = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0')
	{
		b = 0;
		if (haystack[a] == needle[b])
		{
			c = a;
			while (haystack[a] == needle[b])
			{
				if (needle[b + 1] == '\0')
					return ((char *)&haystack[c]);
				b++;
				a++;
			}
			a = c;
		}
		a++;
	}
	return (0);
}
