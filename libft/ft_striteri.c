/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 00:30:53 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/06/24 00:30:53 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
=======

>>>>>>> 2ddc28b55bebb20c682fdb47f99b3782b955f5a3
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*
void my_function(unsigned int index, char *character)
{
	(void) index;
	*character = *character + 1;
}

int	main(void)
{
	char str[] = "Hello";
	printf("Input string: %s\n", str);

	ft_striteri(str, &my_function);

	printf("Result: %s\n", str);
}
*/