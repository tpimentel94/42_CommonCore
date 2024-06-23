/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:41:53 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/06/19 18:41:53 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// compares de first n bytes of memory between str1 and str2

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    char    *str1;
    char    *str2;

    i = 0;
    str1 = (char *)s1;
    str2 = (char *)s2;
    while (i < n)
    {
        if (str1[i] != str2[i])
            return ((unsigned char)str1[i] - (unsigned char)str2[i]);
        i++;
    }
    return(NULL);
}

/*int main(void)
{
		char s1[] = "ola";
		char s2[] = "olA";
		int n = 3;

		int test = ft_memcmp(s1, s2, n);
		int test2 = memcmp(s1, s2, n);
		printf("%d\n", test);
		printf("%d\n", test2);
}*/