/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:15:59 by toandrad          #+#    #+#             */
/*   Updated: 2025/02/12 12:27:35 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str)
	{
		while (*str && *to_find && (*str == *to_find))
		{
			str++;
			to_find++;
		}
		if (!*to_find)
			return (str);
		str++;
	}
	return (0);
}


int	main(void)
{
	char	*str = "aoisjdiuashdhasdaosihdsportingasdasdiugwysbzatrwyh";
	char	*find = "sporting";

	printf("Found string: %s\n", ft_strstr(str, find));
}

