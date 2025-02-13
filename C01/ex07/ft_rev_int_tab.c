/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:15:28 by toandrad          #+#    #+#             */
/*   Updated: 2025/02/04 16:06:20 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i <= size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/* #include <stdio.h>

int	main(void)
{
	int	array[] = {1, 2, 3, 4, 5};
	int	size = sizeof(array) / sizeof(array[0]);
	int	i;

	i = 0;
	ft_rev_int_tab(array, size);
	while(i < size)
	{
		printf("%d", array[i]);
		i++;
	}
}
 */