/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:07:44 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/05/16 20:24:32 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
			return (1);
	return (0);
}
/*
int	main(void)
{
	int	n, y;

	n = ft_isdigit("s");
	
	y = ft_isdigit("1");
	
	printf("Negative test: %d\n", n);
	printf("Positive test: %d\n", y);
}
*/