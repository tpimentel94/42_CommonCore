/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:10:04 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/05/16 20:19:12 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char    *ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if (!((char)c))
		return ((char *)(str + i));
	return (NULL);
}

/*
int main(void)
{
		char str[] = "bom dia";
		int c = ' ';

		char *test = ft_strchr(str, c);
		char *test2 = strchr(str, c);

		printf("%s ok \n", test);
		printf("%s ok \n", test2);
}
*/