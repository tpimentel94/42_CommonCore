/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:08:51 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/05/16 20:08:51 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

/*
int main(void)
{
		char str[] = "bom dia";
		int c = 'o';
		size_t num = 3;

		char *test = ft_memset(str, c, num);
		char *test2 = memset(str, c, num);
		printf("%s\n", test);
		printf("%s\n", test2);
}
*/