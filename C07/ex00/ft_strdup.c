/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:32:23 by toandrad          #+#    #+#             */
/*   Updated: 2025/02/06 09:35:26 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(src) * i);
	i = 0;
	if (dest == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

/* #include <stdio.h>
int main()
{
    char str[] = "Hello!";
    char *copy = ft_strdup(str);

    if (copy)
    {
        printf("Original: %s\n", str);
        printf("Dup: %s\n", copy);
        free(copy);
    }

    return 0;
} */