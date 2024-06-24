/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 00:32:15 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/06/24 00:32:15 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*little;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	little = ft_calloc(len + 1, sizeof(char));
	if (!little)
		return (NULL);
	while (i < len)
	{
		little[i] = s[start + i];
		i++;
	}
	return (little);
}

/*int main(void)
{
	char big[] = "ola tudo bem";
	char *little = ft_substr(big, 4, 4);

	printf("%s\n", little);
}*/