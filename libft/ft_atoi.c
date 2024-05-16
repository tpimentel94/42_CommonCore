/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:11:03 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/05/16 20:16:52 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	nb;

	i = 0;
	s = 0;
	nb = 0;
	while ((str[i] != '\0') && ((str[i] == '\f') || (str[i] == '\n')
			|| (str[i] == '\r') || (str[i] == '\t')
			|| (str[i] == '\v') || (str[i] == ' ')))
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			s++;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (s % 2 != 0)
		nb = nb * -1;
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("\n\t\f   -+++2443ddas3"));
}
*/