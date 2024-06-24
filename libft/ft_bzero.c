/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:09:05 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/05/16 20:09:05 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = '\0';
		i++;
	}
}

/*
int	main(void)
{
	char str[] = "Ola bom dia";

	ft_bzero(str, 3);
	printf("%d%d%d", str[0], str[1], str[2]);
	printf("%s\n", &str[3]);

	bzero(str, 3);
	printf("%d%d%d", str[0], str[1], str[2]);
	printf("%s\n", &str[3]);
}
*/