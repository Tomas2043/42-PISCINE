/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:08:54 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/26 16:02:17 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (b != 0)
	{
		temp = *a / *b;
		*b = *a % *b;
		*a = temp;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	c;
	int	d;

	c = 10;
	d = 2;
	ft_ultimate_div_mod(&c, &d);
	printf("x: %d", c);
	printf("y: %d", d);
}
*/
