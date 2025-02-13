/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:23:14 by toandrad          #+#    #+#             */
/*   Updated: 2025/01/30 14:23:24 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str1[20] = "Hello World!";
	char	str2[20] = "Hello Wor";

	printf("Difference (n = 5): %d\n", ft_strncmp(str1, str2, 5));
	printf("Difference (n = 3): %d\n", ft_strncmp(str1, str2, 3));
	printf("Difference (n = 12): %d\n", ft_strncmp(str1, str2, 12));

	return 0;
}
*/
