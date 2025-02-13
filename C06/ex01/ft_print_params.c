/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:20:28 by toandrad          #+#    #+#             */
/*   Updated: 2025/02/04 16:03:28 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*arg;

	i = 1;
	while (i < argc)
	{
		arg = argv[i];
		while (*arg)
		{
			write(1, arg, 1);
			arg++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
