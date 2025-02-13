/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:18:44 by toandrad          #+#    #+#             */
/*   Updated: 2025/02/04 10:54:02 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/* 
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(19));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(-5));
} */