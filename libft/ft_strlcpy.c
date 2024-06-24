/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:09:33 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/05/16 20:09:33 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
=======

>>>>>>> 2ddc28b55bebb20c682fdb47f99b3782b955f5a3
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
	{
		return (len);
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*i
nt	main(void)
{
	char	src[10] = "diasbons";
	char	dest[3] = "ola";
	size_t	n;

	n = 5;
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, n));
	printf("dest: %s\n", dest);
}
*/