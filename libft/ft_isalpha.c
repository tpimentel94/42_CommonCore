/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlopes-p <tlopes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:07:23 by tlopes-p          #+#    #+#             */
/*   Updated: 2024/05/22 17:58:32 by tlopes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int str)
{
	if ((str >= 'A' && str <= 'Z') || 
		(str >= 'a' && str <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	n, y;

	n = ft_isalpha("ok1ok");
	y = ft_isalpha("justalpha");
	
	printf("Negative test: %d\n", n);
	printf("Positive test: %d\n", y);

}
*/