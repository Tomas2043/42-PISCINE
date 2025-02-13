/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toandrad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:44:26 by toandrad          #+#    #+#             */
/*   Updated: 2025/02/04 15:44:57 by toandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*name;

	name = argv[0];
	if (argc > 0)
	{
		while (*name)
		{
			write(1, name, 1);
			name++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
