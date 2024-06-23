/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:09:13 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/05/16 20:09:13 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*int main(void)
{
		char src[10] = "123456789";
		char dest[3] = "ola";
		size_t n = 5;
		char *test = ft_memcpy(dest, src, n);
		char *test2 = memcpy(dest, src, n);

		printf("%s\n", test);
		printf("%s", test2);
}*/