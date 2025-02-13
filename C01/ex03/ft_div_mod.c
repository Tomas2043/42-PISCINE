/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:05:15 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/26 12:21:19 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	x;
	int	y;

	a = 20;
	b = 2;
	ft_div_mod(a, b, &x, &y);
	printf("div: %d \n", x);
	printf("mod: %d \n", y);
}
*/
