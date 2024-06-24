/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 00:31:19 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/06/24 00:31:19 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
=======

>>>>>>> 2ddc28b55bebb20c682fdb47f99b3782b955f5a3
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*dest;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	dest = malloc((len1 + len2 + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, len1 + 1);
	ft_strlcat(dest, s2, (len1 + len2 + 1));
	return (dest);
}

/*
int main(void)
{
	char s1[] = "bom ";
	char s2[] = "dia";

	char *dest = ft_strjoin(s1, s2);
	printf("%s\n", dest);
}
*/