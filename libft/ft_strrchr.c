/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:10:14 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/05/16 20:10:14 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
=======

>>>>>>> 2ddc28b55bebb20c682fdb47f99b3782b955f5a3
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = (int)ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (0);
}

/*
int	main(void)
{
    const char str[] = "bom dmia";
 	int ch = 0;

 	printf("%s\n", ft_strrchr(str, ch));
 	printf("%s\n", strrchr(str, ch));
}
*/