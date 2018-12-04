/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 15:30:57 by ashanbha          #+#    #+#             */
/*   Updated: 2018/12/03 15:53:32 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(const char *s, char c)
{
	int	sp;
	int	sp_tmp;

	sp_tmp = 0;
	sp = 0;
	while (*s)
	{
		if (sp_tmp == 1 && *s == c)
			sp_tmp = 0;
		if (sp_tmp == 0 && *s != c)
		{
			sp_tmp = 1;
			sp++;
		}
		s++;
	}
	return (sp);
}

char			**ft_strsplit(char const *s, char c)
{
	int		sp;
	char	**tab;
	int		i;
	int		j;
	int		start;

	if ((s == 0) || (c == 0))
		return (NULL);
	sp = ft_count_words(s, c);
	if (!(tab = malloc((sizeof(char *) * (sp + 1)))))
		return (NULL);
	i = 0;
	j = -1;
	while (++j < sp)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = ft_strsub(s, start, i - start);
		i++;
	}
	tab[j] = NULL;
	return (tab);
}
