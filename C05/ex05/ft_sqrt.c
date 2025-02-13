/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 11:01:19 by toandrad          #+#    #+#             */
/*   Updated: 2025/02/04 14:41:39 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	if (nb < 0)
		return (0);
	while (nb > (n * n))
		n++;
	if (nb == (n * n))
		return (n);
	return (0);
}
/* 
#include <stdio.h>

int	main(void)
{
	int	num;

	num = 16;
	printf("The square root of %d is: %d", num, ft_sqrt(num));
} */