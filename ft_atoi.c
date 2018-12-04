/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashanbha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 15:34:59 by ashanbha          #+#    #+#             */
/*   Updated: 2018/12/04 14:16:51 by ashanbha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int				i;
	long long int	result;
	long long int	neg;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < 48 || 57 < str[i])
			return (result * neg);
		else
			result = (result * 10) + (long long int)(str[i] - '0');
		i++;
	}
	return (result * neg);
}
