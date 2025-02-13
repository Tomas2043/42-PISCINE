/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:55:06 by toandrad          #+#    #+#             */
/*   Updated: 2025/02/10 16:45:19 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	len = max - min;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/* #include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;
	
	min = 5;
	max = 10;
	arr = ft_range(min, max);
	if (arr == NULL)
		printf("Erro");
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
} */