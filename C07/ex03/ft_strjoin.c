/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:49:00 by toandrad          #+#    #+#             */
/*   Updated: 2025/02/11 13:18:10 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 1;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (size - 1) * ft_strlen(sep);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;
	char	*ptr;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = malloc(get_total_len(size, strs, sep) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ptr = result;
	i = 0;
	while (i < size)
	{
		ptr = ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		i++;
		if (i < size)
			ptr = ft_strcpy(ptr, sep) + ft_strlen(sep);
	}
	return (result);
}
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"Hello", "World", "This", "is", "C"};
	char	*sep = " ";
	int		size = 4;
	char	*result = ft_strjoin(size, strs, sep);

	if (result != NULL)
	{
		printf("Joined string: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation error.\n");
	}
	return (0);
}