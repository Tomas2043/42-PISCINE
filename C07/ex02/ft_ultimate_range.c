/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:49:16 by toandrad          #+#    #+#             */
/*   Updated: 2025/02/10 16:46:37 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!*range)
		return (-1);
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}

/* #include <stdio.h>
int	main(void)
{
	int	*range;
	int	size;
	int	i;
	int	min;
	int	max;

	min = 0;
	max = 11;
	size = ft_ultimate_range(&range, min, max);
	if (size == -1)
	{
		printf("Erro");
		return (1);
	}
	else if (size == 0)
	{
		printf("min is bigger than max");
	}
	else
	{
		printf("range from %d to %d:\n", min, max);
		i = 0;
		while (i < size)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("\n");
		free(range);
	}
}
 */