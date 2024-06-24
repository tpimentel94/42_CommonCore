/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:10:39 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/05/16 20:10:39 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
=======

>>>>>>> 2ddc28b55bebb20c682fdb47f99b3782b955f5a3
void    *ft_memchr(const void *str, int c, size_t n)
{
    size_t  i;
    char    *s;

    i = 0;
    s = (char *)str;
    while (i < n)
    {
        if ((unsigned char)s[i] == (unsigned char)c)
            return ((char *)(s + i));
    i++; 
    }
    return (NULL);
}

/*
int main(void)
{
		char s[] = "Hello.world";
		int c = '.';
		size_t n = 7;
		char *str = ft_memchr(s, c, n);
		char *str2 = memchr(s, c, n);

		printf("%s\n", str);
		printf("%s\n", str2);
}
*/