/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 00:31:53 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/06/24 00:31:53 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trimmed;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	if (*set == '\0')
		return (ft_strdup(s1));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i] && ft_strrchr(set, s1[j]))
		j--;
	trimmed = ft_substr(s1, i, j - i + 1);
	return (trimmed);
}

/*int main(void)
{
	char s1[] = "aadddssaatudo bem?ddssadssa";
	char s2[] = "asd";
	char *dest = ft_strtrim(s1, s2);

	printf("%s\n", dest);
}*/