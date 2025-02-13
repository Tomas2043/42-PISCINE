/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:37:42 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/30 14:07:25 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 || *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>

int main(void)
{
	char	str1[20] = "Hello World!";
	char	str2[20] = "Hello Wor";

	printf("Difference: %d\n", ft_strcmp(str1, str2));
	return 0;
}
*/
