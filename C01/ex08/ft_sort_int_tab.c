/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:46:32 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/27 14:34:39 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	array[] = {4, 9, 7, 2, 3};
	int	size = sizeof(array) / sizeof(array[0]);
	int	i;
	
	i = 0;
	ft_sort_int_tab(array, size);
	while(i < size)
	{
		printf("%d", array[i]);
		i++;
	}
}
*/
